/* 
* @author carlosromero y JoseAdelaRosa
 * @date 12/10/2019
 * @brief clase ingrediente
 * 
 */

#ifndef INGREDIENTE_H
#define INGREDIENTE_H

#include<string>

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
	void Copiar(const ingrediente &i);
        
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
        std::string getNombre() const;
        
        /**
         * @brief Devuelve el número de calorías que aporta cada 100 gramos de ingrediente.
         * @return calorias
         */
        double getCalorias() const;
        
        /**
         * @brief Devuelve el porcentaje de hidratos de carbono.
         * @return hidratos
         */
        double getHc() const;
        
        /**
         * @brief Devuelve el porcentaje de proteínas.
         * @return proteinas
         */
        double getProteinas() const;
        
        /**
         * @brief Devuelve el porcentaje de grasas.
         * @return grasas
         */
        double getGrasas() const;
        
        /**
         * @brief Devuelve el porcentaje de fibra.
         * @return fibra
         */
        double getFibra() const;
        
        /**
         * @brief Devuelve el tipo del ingrediente.
         * @return tipo
         */
        std::string getTipo() const;
        /**
         * @brief Modifica el nombre del ingrediente
         * @param Nuevo nombre
         */
        void setNombre(std::string nombre_nuev);
        
        /**
         * @brief Modifica el número de calorías que aporta cada 100 gramos de ingrediente.
         * @param Nuevas calorias
         * @prec calorias_nuev >= 0
         */
        void setCalorias(double calorias_nuev);
        
        /**
         * @brief Modifica el porcentaje de hidratos de carbono.
         * @param Nuevos hidratos
         * @prec 0 <= hidratos_nuev <= 100
         */
        void setHc(double hidratos_nuev);
        
        /**
         * @brief Modifica el porcentaje de proteínas.
         * @param Nuevas proteinas
         * @prec 0 <= proteinas_nuev <= 100
         */
        void setProteinas(double proteinas_nuev);
        
        /**
         * @brief Modifica el porcentaje de grasas.
         * @param Nuevas grasas
         * @prec 0 <= grasas_nuev <= 100
         */
        void setGrasas(double grasas_nuev);
        
        /**
         * @brief Modifica el porcentaje de fibra.
         * @param Nueva fibra
         * @prec 0 <= fibra_nuev <= 100
         */
        void setFibra(double fibra_nuev);
        
        /**
         * @brief Devuelve el tipo del ingrediente.
         * @return tipo
         */
        void setTipo(std::string tipo_nuev);
        

};

/**
 * @brief Sobrecarga del operador de escritura <<
 * @param os: Flujo
 * @param i: Ingrediente a escribir
 * @return os flujo modificado 
 */
std::ostream& operator <<(std::ostream &os, const ingrediente &i);

/**
 * @brief Sobrecarga del oeprador de lectura >>
 * @param is: Flujo
 * @param i: Ingrediente donde se introducen los datos leídos.
 * @return is flujo
 */
std::istream& operator >>(std::istream &is, ingrediente &i);


#endif /* INGREDIENTE_H */

