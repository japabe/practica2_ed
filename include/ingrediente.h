/* 
* @author carlosromero y JoseAdelaRosa
 * @date 12/10/2019
 * @brief clase ingrediente
 * 
 */



#ifndef INGREDIENTE_H
#define INGREDIENTE_H

#include <string>

class ingrediente
{
    private:
        std::string nombre;
        double calorias;
        double hidratos;
        double proteinas;
        double grasas;
        double fibra;
        std::string tipo;
    public:
        /**
         * @brief Constructor por defecto
         *
         */
        ingrediente();
};


#include "ingrediente.cpp"
#endif /* INGREDIENTE_H */

