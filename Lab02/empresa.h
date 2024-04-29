#ifndef EMPRESA_H
#define EMPRESA_H

#define MAX_EMPLEADO 100
#include <iostream>
#include <vector>
#include "empleado.h"
#include "paga.h"
using namespace std;

class Empleado;

class Empresa{
private:
    string nombre;
    string razon_social;
    int rut;
    vector<Empleado*> vecEmp;
public:
    Empresa();
    Empresa(string, string, int);
    void imprimir();
    void imp_vector();
    void agregar_empleado(Empleado*);
    float total_sueldo_pesos();
    float total_sueldo_dolares();
};


#endif

