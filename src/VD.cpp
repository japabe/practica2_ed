//VD.cpp
//No ponemos #include "VD.h", ya hemos incluido VD.cpp en el VD.h.

#include <iostream>

template <class T>
void VD<T> :: resize(int nuevotam){
    
    if(nuevotam > 0){
        
        T *aux = new T [nuevotam];
        int minimo = (n<nuevotam)?n:nuevotam;
        for (int i=0; i<minimo; i++)
            aux[i] = datos[i];
    
        reservados = nuevotam;
        n = minimo;
        delete [] datos;
        datos = aux;
    }
    
    else
        std::cerr << "ERROR::Tamaño " << nuevotam << " no válido." << std::endl;
}

template <class T>
void VD<T> :: Copiar (const VD<T> &v)
{
    reservados = v.reservados;
    n = v.n;
    datos = new T [reservados];
    
    for (int i = 0; i < n; i++)
        datos[i] = v.datos[i];
}

template <class T>
void VD<T> :: Liberar(){
    
    if(datos != nullptr)
        delete [] datos;
}

template <class T>//en otros sitios el class se sustituye por typename
VD<T> :: VD (int tam)
{
    
    if(tam > 0){
        
        reservados = tam;
        datos = new T [reservados];
    }
    
    else{
        
        reservados = 0;
        datos = nullptr;
    }
    n = 0;
}

template <class T>
VD<T> :: VD(const VD<T> &original)
{
    datos = nullptr;
    Copiar(original);
}

template <class T>
VD<T> :: ~VD()
{
    Liberar();
}

template <class T>
VD<T> & VD<T> :: operator=(const VD<T> & v)
{
    if (this != &v)
    {
        Liberar();
        Copiar(v);
    }
    
    return *this;
}

template <class T>
void VD<T> :: Insertar (const T &d, int pos)
{
    /*segun estudios estadisticos, la mejor forma de usar un vector dinamico es
     que n < reservados/2, y cuando se supere esa cifra hacer un resize de
     2*reservados*/
    
    if(0 <= pos && pos < n){
        
        if (n >= (reservados/2))
        resize(2*reservados);
    
        for (int i=n; i > pos; i--)
            datos[i] = datos[i-1];
    
        datos[pos] = d;
        n++;
    }
    
    else
        std::cerr << "ERROR::Posición " << pos << " no válida." << std::endl;
}

template <class T>
void VD<T> :: Borrar (int pos)
{
    
    if(0 <= pos && pos < n){
        
        for (int i=pos; i<n-1; i++)
        datos[i] = datos[i+1];
    
        n--;
    
        if (n < (reservados/4))
            resize (reservados/2);
    }
    
    else
        std::cerr << "ERROR::Posición " << pos << " no válida." << std::endl;
}