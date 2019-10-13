
#include "ingrediente.h"
using namespace std;


void ingrediente::Copiar(const ingrediente &i){
    
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


