#include <iostream>
#include <vector>
#include <string>
#include "empresa.h"
#include "paga.h"
#include "empleado.h"
using namespace std;


Empleado::Empleado(string _nombre, string _ci, int _edad, Paga _valorHora){
    nombre=_nombre;
    ci=_ci;
    edad=_edad;
    valor_hora=_valorHora;
    
}

Empleado::~Empleado(){};

void Empleado::imprimir(){
    cout << "Nombre: " <<nombre << "\nCI: " << ci << "\nEdad: " << edad << endl;
}



