#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <iostream>
#include <vector>
#include <string>
#include "empresa.h" 
#include "empleado.h"
#include "paga.h"
#include "moneda.h"
#include "cambio.h"


using namespace std;

// class Empresa;

class Empleado {
    protected:
        string nombre;
        string ci;
        int edad;
        Paga valor_hora;
        Empresa* empresa;
    public:
        virtual void get_sueldo_peso()=0;
        virtual void get_sueldo_dolar()=0;
};

class Jornalero : public Empleado {
    private:
        int horas;
    public:
        Jornalero(string, string, int, Paga);
        void get_sueldo_peso();
        void get_sueldo_dolar();
};

class Fijo : public Empleado {
    private:
    public:
        Fijo(string, string, int, Paga);
        // ~Fijo();
        void get_sueldo_peso();
        void get_sueldo_dolar();
};

#endif