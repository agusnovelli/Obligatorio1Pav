#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <iostream>
#include <vector>
#include <string>
#include "empresa.h"
#include "paga.h"
using namespace std;

class Empresa;

class Empleado {
    protected:
        string nombre;
        string ci;
        int edad;
        Paga valor_hora;
        Empresa* empresa;
    public:
        Empleado(string, string, int, Paga);
        ~Empleado();
        void imprimir();
        virtual float get_sueldo_peso()=0;
        virtual float get_sueldo_dolar()=0;
};


#endif