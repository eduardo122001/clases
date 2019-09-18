#include "punto.h"
#include <iostream>


punto::punto()
{
    x=0;
    y=0;
}
punto::punto(double nx,double ny){
    x=nx;
    y=ny;
}
void punto::modificar(double nx,double ny){
    x+=nx;
    y+=ny;
}
void punto::imprimir(){
    std::cout<<"("<<x<<","<<y<<")";
}
