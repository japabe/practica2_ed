
#include <iostream>

template <class T>
VD<T> :: VD (int tam){
    
    if(tam > 0){
        
        reservados = tam;
        datos = new T [reservados];
    }
    
    else{
        
        datos = nullptr;
        reservados = 0;
    }
    n = 0;
}

template <class T>
void VD<T> :: resize(int nuevotam){
    
    int minimo = nuevotam;
    
    if(nuevotam > 0){
        
        T *aux = new T [nuevotam];
        
        if(n < minimo)
            minimo = n;
                
        for (int i = 0; i < minimo; i++)
            aux[i] = datos[i];
    
        reservados = nuevotam;
        n = minimo;
        delete [] datos;
        datos = aux;
        aux = nullptr;
    }
    
    else
        std::cerr << "ERROR::Tamaño " << nuevotam << " no válido." << std::endl;
}

template <class T>
void VD<T> :: Copiar (const VD<T> &v){
    
    this->reservados = v.reservados;
    this->n = v.size();
    this->datos = new T [reservados];
    
    for (int i = 0; i < this->size() ; i++)
        this->datos[i] = v.datos[i];
}

template <class T>
void VD<T> :: Liberar(){
    
    if(datos != nullptr){
        
        delete [] datos;
        datos = nullptr;
        n = 0;
        reservados = 0;
    }
}


template <class T>
VD<T> :: VD(const VD<T> &original){
    
    datos = nullptr;
    Copiar(original);
}

template <class T>
VD<T> :: ~VD(){
    
    Liberar();
}


template <class T>
VD<T> & VD<T> :: operator=(const VD<T> & v){
    
    if (this != &v){
        
        Liberar();
        Copiar(v);
    }
    
    return *this;
}

template <class T>
void VD<T> :: Insertar (const T &d, int pos){
    
    /*segun estudios estadisticos, la mejor forma de usar un vector dinamico es
     que n < reservados/2, y cuando se supere esa cifra hacer un resize de
     2*reservados*/
    
    if(0 <= pos && pos <= size() ){
        
        if (size() >= (reservados/2))
            resize(2*reservados);
    
        for (int i = size(); i > pos; i--)
            datos[i] = datos[i-1];
    
        datos[pos] = d;
        n++;
    }
    
    else if(pos > size() && pos < reservados)
        Insertar(d, size());
    
    else
        std::cerr << "ERROR::Posición " << pos << " no válida." << std::endl;
}

template <class T>
void VD<T> :: Borrar (int pos){
    
    if(0 <= pos && pos < size() ){
        
        for (int i = pos; i < n - 1; i++)
            datos[i] = datos[i+1];
    
        n--;
    
        if (size() < (reservados/4))
            resize(reservados/2);
    }
    
    else
        std::cerr << "ERROR::Posición " << pos << " no válida." << std::endl;
}

template <class T>
T & VD<T>::operator[](int i){
    
    T result= -1; 
   
    if(0 <= i && i < size() )
        result = datos[i];
    
    else
        std::cerr << "ERROR::Posición " << i << " no válida." << std::endl;
    
    return result;
}

template <class T>
const T& VD<T>::operator [](int i) const{
    
    const T result= -1; 
   
    if(0 <= i && i < size() )
        result = datos[i];
    
    else
        std::cerr << "ERROR::Posición " << i << " no válida." << std::endl;
    
    return result;
}