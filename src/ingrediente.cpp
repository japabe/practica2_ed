
#include "ingrediente.h"
#include <ostream>
#include <istream>
#include <sstream>
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
    if(calorias_nuev >= 0.0)
        calorias = calorias_nuev;
}

void ingrediente::setHc(double hidratos_nuev)
{
    if((hidratos_nuev >= 0.0)&&(hidratos_nuev <= 100.0))
        hidratos = hidratos_nuev;
}

void ingrediente::setProteinas(double proteinas_nuev)
{
    if((proteinas_nuev >= 0.0)&&(proteinas_nuev <= 100.0))
        proteinas = proteinas_nuev;
}

void ingrediente::setGrasas(double grasas_nuev)
{
    if((grasas_nuev >= 0.0)&&(grasas_nuev <= 100.0))
        grasas = grasas_nuev;
}

void ingrediente::setFibra(double fibra_nuev)
{
    if((fibra_nuev >= 0.0)&&(fibra_nuev <= 100.0))
        fibra = fibra_nuev;
}

void ingrediente::setTipo(std::string tipo_nuev)
{
    tipo = tipo_nuev;
}

std::ostream& operator <<(std::ostream &os, const ingrediente &i)
{
 os<<"Nombre " <<i.getNombre()<<endl;
 os<<"Calorias "<<i.getCalorias()<<endl;
 os<<"Hc "<<i.getHc()<<endl;
 os<<"Proteinas "<<i.getProteinas()<<endl;
 os<<"Grasas "<<i.getGrasas()<<endl;
 os<<"Fibra "<<i.getFibra()<<endl;
 os<<"Tipo "<<i.getTipo()<<endl;
 return os;
}


std::istream& operator >>(std::istream &is, ingrediente &i)
{
    string metodo_leido;
    string linea_como_string;
    stringstream linea_como_is;
    
    getline(is, linea_como_string);
    linea_como_is.str(linea_como_string);
    
    getline(linea_como_is, metodo_leido, ';');
    i.setNombre(metodo_leido);
    getline(linea_como_is, metodo_leido, ';');
    i.setCalorias(stod(metodo_leido));
    getline(linea_como_is, metodo_leido, ';');
    i.setHc(stod(metodo_leido));
    getline(linea_como_is, metodo_leido, ';');
    i.setProteinas(stod(metodo_leido));
    getline(linea_como_is, metodo_leido, ';');
    i.setGrasas(stod(metodo_leido));
    getline(linea_como_is, metodo_leido, ';');
    i.setFibra(stod(metodo_leido));
    getline(linea_como_is, metodo_leido, ';');
    i.setTipo(metodo_leido);
    return is;
}
