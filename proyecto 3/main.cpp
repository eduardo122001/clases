#include <iostream>
#include "punto.h"
#include "vectorr.h"

using namespace std;



int main()
{
    vectorr x;
    x.imprimir();

    x.modificarInicio(0,0);
    x.modificarFin(6,8);
    x.imprimir();
    double c=x.calculaModulo();
    cout<<c<<endl;


    return 0;
}
