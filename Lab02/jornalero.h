#ifndef JORNALERO_H
#define JORNALERO_H

#include <iostream>
#include <vector>
#include <string>
#include "empresa.h"
#include "paga.h"
#include "empleado.h"
#include "jornalero.h"
using namespace std;

class Jornalero : public Empleado {
    private:
        int horas;
    public:
        Jornalero(string, string, int, Paga, int);
        float get_sueldo_peso();
        float get_sueldo_dolar();
};

#endif