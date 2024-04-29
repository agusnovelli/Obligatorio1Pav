#include <iostream>
#include "empleado.h"
#include "empresa.h"
#include <string>

using namespace std;

Empresa::Empresa(){
}

Empresa::Empresa(string _nombre, string _razonSocial, int _rut){
    nombre = _nombre;
    razon_social = _razonSocial;
    rut = _rut;
}

void Empresa::imprimir(){
    cout << nombre << " " << razon_social << " " << rut << endl;
}

void Empresa::agregar_empleado(Empleado* puntero){
    vecEmp.push_back(puntero);
}

void Empresa::imp_vector(){
    for(int i=0; i<vecEmp.size(); i++){
        vecEmp[i]->imprimir();
    }
}


float Empresa::total_sueldo_pesos(){
    float tot;
    for(int i=0; i<vecEmp.size(); i++){
        tot = tot + vecEmp[i]->get_sueldo_peso();
    }
    return tot;
}


float Empresa::total_sueldo_dolares(){
    float tot;
    for(int i=0; i<vecEmp.size(); i++){
        tot = tot + vecEmp[i]->get_sueldo_dolar();
    }
    return Cambio::a_dolar(tot);
}