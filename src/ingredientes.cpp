#include "ingredientes.h"

using namespace std;

ingredientes::ingredientes()
{
    Ingrediente();
}

ingredientes::ingredientes(const ingredientes &v)
{
    Ingrediente(v.Ingrediente);
}

ingredientes::~ingredientes()
{
    ~Ingrediente();
}

