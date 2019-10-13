
#include <iostream>
#include "VD.h"

using namespace std;

int main(){
    
    VD<int> vector(20);
    VD<int> copia_inicial;
    
    for(int i = 0 ; i < 19  ; i++)
        vector.Insertar(i, i);
    
    copia_inicial = vector;
    
    
    vector.Insertar(111, 19);
    
    vector.Borrar(0);
    
    VD<int> copia_final(vector);
    
    return 0;
}

