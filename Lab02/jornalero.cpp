#include <iostream>
#include "empleado.h"
#include "jornalero.h"
using namespace std;


Jornalero::Jornalero(string _nombre, string _ci, int _edad, Paga _valorHora, int _horas) :Empleado(_nombre, _ci, _edad, _valorHora){
    horas=_horas;
}

float Jornalero::get_sueldo_peso(){
    return 0;
};
float Jornalero::get_sueldo_dolar(){
    return 0;
};