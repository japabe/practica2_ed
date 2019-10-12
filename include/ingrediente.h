/* 
* @author carlosromero y JoseAdelaRosa
 * @date 12/10/2019
 * @brief clase ingrediente
 * 
 */

#ifndef INGREDIENTE_H
#define INGREDIENTE_H

class ingrediente
{
    private:
        string nombre;
        double calorias;
        double hidratos;
        double proteinas;
        double grasas;
        double fibra;
        string tipo;
    public:
        /**
         * @brief Constructor por defecto
         *
         */
        ingrediente();
};


#endif /* INGREDIENTE_H */

#include "ingrediente.cpp"