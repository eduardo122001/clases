#include "vectorr.h"
#include "punto.h"
#include <iostream>
#include <cmath>

vectorr::vectorr(){

}
void vectorr::imprimir(){
    inicio.imprimir();
    std::cout<<"-->";
    fin.imprimir();
}

void vectorr::modificarInicio(double nx,double ny){
    inicio.modificar(nx,ny);
}
void vectorr::modificarFin(double nx ,double ny){
    fin.modificar(nx,ny);
}
double vectorr::calculaModulo(){
    return sqrt((inicio.x-fin.x)*(inicio.x-fin.x)+(inicio.y-fin.y)*(inicio.y-fin.y));
}


