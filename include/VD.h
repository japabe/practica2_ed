/**
 * @file VD.h
 * @author Carlos Romero Cruz Jose Antonio de la Rosa Cubero
 * @date 12/10/2019
 */

#ifndef VD_H
#define VD_H

template <class T>
class VD{
    
    private:
        
        T *datos;       //zona de memoria para almacenar los datos de tipo T
        int n;      //numero de datos almacenados
        int reservados;     //espacio asignado a datos
        
        /**
         * @brief Cambia el tamaño del vector a @p nuevotam.
         * @param nuevotam: Nuevo tamaño del vector
         * @prec 0 <= nuevotam
         */
        void resize (int nuevotam);
        
        /**
         * @brief Copia el vector @p v en el objeto actual.
         * @param v: Vector a copiar
         */
        void Copiar (const VD<T> &v);
        
        /**
         * @brief Libera memoria dinámica.
         */
        void Liberar ();
        
    public:
        
        /**
         * @brief Contructor por defecto y con parametro
         * @param tam: elementos a reservar para el vector dinamico
         * @note si no se proporciona un valor para tam se tomara como 10
         * 
         */
        VD (int tam=10);
        
        /** @brief Constructor de copia
         * @param original: vector dinamico origen
         */
        VD (const VD<T> &original);
        
        /**
         * @brief Destructor. Elimina la memoria asociada al vector dinamico
         */
        ~VD ();
        
        /**
         * @brief Operador de asignacion
         * @param v: vector dinamico fuente
         * @return una referencia al objeto al que apunta this
         */
        VD<T> &operator= (const VD<T> &v);
        
        /**
         * @brief Obtiene el numero de elementos almacenados en el vector dinamico
         */
        inline int size() const{ return n; }
        
        /**
         * @brief Consulta y modifica el elemento i-esimo
         * @param i: posicion del elemento
         * @return una referencia al elemento i-esimo del vector dinamico
         */
        T &operator[] (int i);
        
        /**
         * @brief Consulta y modifica el elemento i-esimo
         * @param i: posicion del elemento
         * @return una referencia constante al elemento i-esimo del vector dinamico
         */
        const T &operator[] (int i) const;
        
        /**
         * @brief Inserta un objeto en la posicion pos del vector dinamico
         * @param d: objeto a insertar
         * @param pos: posicion donde insertar.
         * @pre pos debe estar comprendido entre 0 y size()
         * @post aumenta en uno el vector dinamico
         */
        void Insertar (const T &d, int pos);
        
        /**
         * @brief Elimina el elemento en la posicion pos
         *  @param pos: posicion del elemento a borrar.
         */
        void Borrar (int pos);
};
#include "../src/VD.cpp"

#endif /* VD_H */