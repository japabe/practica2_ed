/* 
* @author carlosromero y JoseAdelaRosa
 * @date 12/10/2019
 * @brief clase ingrediente
 * 
 */

#ifndef INGREDIENTE_H
#define INGREDIENTE_H

class ingrediente{
    
    private:
        std::string nombre;
        double calorias;
        double hidratos;
        double proteinas;
        double grasas;
        double fibra;
        std::string tipo;
        
        /**
         * @brief Copia el ingrediente i en el objeto actual
         * @param i: ingrediente a copiar
         */
	void Copiar(const ingrediente i);
        
    public:
        
        /**
         * @brief Constructor por defecto
         *
         */
        ingrediente();
        
        /**
         * @brief Constructor de copia
	 * @param El ingrediente que deseamos copiar
         *
         */
        ingrediente(const ingrediente &i);
        
        /**
         * @brief Devuelve el nombre del ingrediente
         * @return nombre
         */
        double getNombre();
        
        /**
         * @brief Devuelve el número de calorías que aporta cada 100 gramos de ingrediente.
         * @return calorias
         */
        double getCalorias();
        
        /**
         * @brief Devuelve el porcentaje de hidratos de carbono.
         * @return hidratos
         */
        double getHc();
        
        /**
         * @brief Devuelve el porcentaje de proteínas.
         * @return proteinas
         */
        double getProteinas();
        
        /**
         * @brief Devuelve el porcentaje de grasas.
         * @return grasas
         */
        double getGrasas();
        
        /**
         * @brief Devuelve el porcentaje de fibra.
         * @return fibra
         */
        double getFibra();
        
        /**
         * @brief Devuelve el tipo del ingrediente.
         * @return tipo
         */
        double getTipo();
};

std::ostream & operator <<(std::ostream &os, const ingrediente &ing);

#endif /* INGREDIENTE_H */

