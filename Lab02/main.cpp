#include <iostream>
#include <stdlib.h>
#include "empleado.h"
#include "empresa.h" 
#include "paga.h"
#include "jornalero.h"
#include "fijo.h"
using namespace std;


int main(){
    int opcion;
    bool salir = true;
    Empresa emp;
    Empleado* pEmpleado;


    while(salir){
        cout << "Seleccione una opcion utilizando un numero:"<< endl;
        cout << "1)Crear Empresa.\n2)Añadir empleado.\n3)Liquidar Sueldos.\n0)Salir.\nOpcion: ";
        cin >> opcion;
        while(opcion > 3 and opcion < 1){
            cout << "Opcion no valida, seleccione un numero dentro de las opciones.\nOpcion: ";
            cin >> opcion;
        }
        switch (opcion)
        {
        case 1:{
            getchar();
            string nombre_emp;
            string nombre_legal_emp;
            int rut_emp;
            cout << "Ingrese nombre: ";
            getline(cin, nombre_emp);
            cout << "Ingrese nombre legal: ";
            getline(cin, nombre_legal_emp);
            cout << "Ingrese rut: ";
            cin >> rut_emp;
            emp = Empresa(nombre_emp, nombre_legal_emp, rut_emp);
            emp.imprimir();
        }
            break;
        case 2:{ //Añadir empleado
            string nombre_emp;
            string ci_emp;
            int edad_emp;
            float monto_paga_emp;
            cout << "1)Fijo.\n2)Jornalero.\nOpcion: ";
            cin >> opcion;
            getchar();
            cout << "Nombre y apellido del empleado: ";
            getline(cin, nombre_emp);
            cout << "Cedula de Identidad del empleado: ";
            getline(cin, ci_emp);
            cout << "Edad del empleado: ";
            cin >> edad_emp;
            cout << "Valor hora del empleado: ";
            cin >> monto_paga_emp;
            Paga paga_emp(monto_paga_emp, uy);
            while(opcion < 1 and opcion > 2){
                cout << "Opcion invalida. Seleccione las opcines disponibles.\n";
                cout << "1)Fijo.\n2)Jornalero.\nOpcion: ";
            }
            if(opcion == 1){
                pEmpleado = new Fijo(nombre_emp, ci_emp, edad_emp, paga_emp);
            }
            else{
                int horas_jorn;
                cout << "Horas del empleado: ";
                cin >> horas_jorn;
                pEmpleado = new Jornalero(nombre_emp, ci_emp, edad_emp, paga_emp, horas_jorn);
            }
            emp.agregar_empleado(pEmpleado);
            }
            break;
        case 3:
            cout << "1)Dolares.\n2)Pesos.\nOpcion: ";
            cin >> opcion;
            if(opcion==1)
                cout << emp.total_sueldo_dolares()<< endl;
            else
                cout << emp.total_sueldo_pesos()<<endl;
            break;
        case 0:
            salir = false;
            break;
        }

    }
    return 0;
}