/* 
 * @file ingredientes.h
 * @author carlosromero
 *
 * 
 */

#ifndef INGREDIENTES_H
#define INGREDIENTES_H

#include "VD.h"
#include "ingrediente.h"

class ingredientes{
    private:
        VD<ingrediente> Ingrediente;
    public:
        /*
         * @brief Constructor por defecto
         *
         */
        ingredientes();
        /*
         * @brief Constructor de copia
         * @param Ingredientes que queremos copiar
         *
         */
        ingredientes(const ingredientes &v);
        /*
         * @brief destructor de la clase
         *
         */
        ~ingredientes();
};


#endif /* INGREDIENTES_H */

