#ifndef FIJO_H
#define FIJO_H

#include <iostream>
#include <vector>
#include <string>
#include "empresa.h"
#include "paga.h"
#include "empleado.h"
using namespace std;

class Fijo : public Empleado {
    private:
    public:
        Fijo(string, string, int, Paga);
        ~Fijo();
        void imprimir();
        float get_sueldo_peso();
        float get_sueldo_dolar();
};

#endif