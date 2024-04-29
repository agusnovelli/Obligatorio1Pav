#include <iostream>
#include "empleado.h"
#include "paga.h"
#include <string>
#include "fijo.h"

using namespace std;


Fijo::Fijo(string _nombre, string _ci, int _edad, Paga _valorHora) : Empleado(_nombre, _ci, _edad, _valorHora){
}

Fijo::~Fijo(){};

float Fijo::get_sueldo_peso(){
    float tmp = valor_hora.get_monto()*40;
    return tmp;
}

float Fijo::get_sueldo_dolar(){
    float tmp = valor_hora.get_monto()*40;
    return tmp;
}

void Fijo::imprimir(){
    cout << "Nombre: " <<nombre << "\nCI: " << ci << "\nEdad: " << edad << endl;
}