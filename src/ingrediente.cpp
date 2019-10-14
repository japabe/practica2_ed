
#include "ingrediente.h"
#include <ostream>
#include <istream>
#include <string>
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


std::string ingrediente::getNombre() const
{
    return nombre;
}

double ingrediente::getCalorias() const
{
    return calorias;
}

double ingrediente::getHc() const
{
    return hidratos;
}


double ingrediente::getProteinas() const
{
    return proteinas;
}


double ingrediente::getGrasas() const
{
    return grasas;
}

double ingrediente::getFibra() const
{
    return fibra;
}


std::string ingrediente::getTipo() const
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

void ingrediente::setHc(double hidratos_nuev)
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

std::ostream& operator <<(std::ostream &os, const ingrediente &i)
{
 os << "Leido ingrediente:" << endl;
 os<<"Nombre " <<i.nombre<<endl;
 os<<"Calorias "<<i.calorias<<endl;
 os<<"Hc "<<i.hidratos<<endl;
 os<<"Proteinas "<<i.proteinas<<endl;
 os<<"Grasas "<<i.grasas<<endl;
 os<<"Fibra "<<i.fibra<<endl;
 os<<"Tipo "<<i.tipo<<endl;
 return os;
}


std::istream& operator >>(std::istream &is, const ingrediente &i)
{
    return is;
}