#ifndef VECTORR_H
#define VECTORR_H
#include "punto.h"


class vectorr
{
    public:
        punto inicio,fin;
        vectorr();
        //vectorr(punto nin,punto nfn);
        void imprimir();
        void modificarInicio(double nx,double ny);
        void modificarFin(double nx,double ny);
        double calculaModulo();

};

#endif // VECTORR_H
