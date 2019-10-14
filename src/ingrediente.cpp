
#include "ingrediente.h"
using namespace std;


void ingrediente::Copiar(const ingrediente &i)
{
    
        nombre = i.nombre;
	calorias = i.calorias;
        hidratos = i.hidratos;
        proteinas = i.proteinas;
        grasas = i.grasas;
        fibra = i.fibra;
        tipo = i.tipo;
}

ingrediente::ingrediente(){
    
        nombre = "";
        calorias = 0.0;
        hidratos = 0.0;
        proteinas = 0.0;
        grasas = 0.0;
        fibra = 0.0;
        tipo = "";
}

ingrediente::ingrediente(const ingrediente &i){
    
    Copiar(i);
}


std::string ingrediente::getNombre()
{
    return nombre;
}

double ingrediente::getCalorias()
{
    return calorias;
}

double ingrediente::getHidratos()
{
    return hidratos;
}


double ingrediente::getProteinas()
{
    return proteinas;
}


double ingrediente::getGrasas()
{
    return grasas;
}

double ingrediente::getFibra()
{
    return fibra;
}


std::string ingrediente::getTipo()
{
    return tipo;
}

void ingrediente::setNombre(std::string nombre_nuev)
{
    nombre = nombre_nuev;
}

void ingrediente::setCalorias(double calorias_nuev)
{
    calorias = calorias_nuev;
}

void ingrediente::setHidratos(double hidratos_nuev)
{
    hidratos = hidratos_nuev;
}

void ingrediente::setProteinas(double proteinas_nuev)
{
    proteinas = proteinas_nuev;
}

void ingrediente::setGrasas(double grasas_nuev)
{
    grasas = grasas_nuev;
}

void ingrediente::setFibra(double fibra_nuev)
{
    fibra = fibra_nuev;
}

void ingrediente::setTipo(std::string tipo_nuev)
{
    tipo = tipo_nuev;
}