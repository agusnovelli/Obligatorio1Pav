#ifndef PAGA_H
#define PAGA_H

#include <iostream>
#include "cambio.h"
#include "moneda.h"

using namespace std;

class Paga {
    private:
        float monto;
        Moneda moneda;
    public:
        Paga();
        Paga(float, Moneda);
        Paga a_dolar();
        Paga a_pesos();
        float get_monto();
};

#endif