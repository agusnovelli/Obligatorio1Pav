#ifndef EMPRESA_H
#define EMPRESA_H

#include <iostream>
#include <vector>
#define MAX_EMPLEADO 100
#include "empresa.h" 
#include "empleado.h"
#include "paga.h"
#include "moneda.h"
#include "cambio.h"
using namespace std;


class Empresa{
private:
    string nombre;
    string razon_social;
    int rut;
    vector<Empleado*> emp;
public:
    Empresa(string, string, int/*, vector<Empleado>*/);
    float total_sueldo_pesos();
    float total_sueldo_dolares();
};

Empresa::Empresa(string nom, string rs, int numRut/*, vector<Empleado>*/)
{
    Empresa::nombre = nom;
}

#endif

