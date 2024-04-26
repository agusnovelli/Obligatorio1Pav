#include <iostream>
#include <stdlib.h>
#include "empleado.h"
#include "empresa.h" 
#include "paga.h"
#include "moneda.h"
#include "cambio.h"
using namespace std;

int main(){
    int opcion;
    bool salir = true;

    while(salir){
        cout << "Seleccione una opcion utilizando un numero:"<< endl;
        cout << "1)Crear Empresa.\n2)Añadir empleado.\n3)Borrar Empleado.\n4)Liquidar Sueldos.\n0)Salir.\nOpcion: ";
        cin >> opcion;
        while(opcion > 4 and opcion < 1){
            cout << "Opcion no valida, seleccione un numero dentro de las opciones.\nOpcion: ";
            cin >> opcion;
        }
        string nombre_emp;
        string ci_emp;
        switch (opcion)
        {
        case 1:
            /* code */
            break;
        case 2:
            int edad_emp;
            float monto_paga_emp;
            cout << "1)Fijo.\n2)Jornalero.\nOpcion: ";
            cin >> opcion;
            cout << "Nombre y apellido del empleado: ";
            cin >> nombre_emp;
            cout << "Cedula de Identidad del empleado: ";
            cin >> ci_emp;
            cout << "edad del empleado: ";
            cin >> edad_emp;
            cout << "Valor hora del empleado: ";
            cin >> monto_paga_emp;
            // Paga paga_emp(monto_paga_emp, uy);
            while(opcion < 1 and opcion > 2){
                cout << "Opcion invalida. Seleccione las opcines disponibles.\n";
                cout << "1)Fijo.\n2)Jornalero.\nOpcion: ";
            }
            if(opcion == 1){
                // Fijo emp_fijo(nombre_emp, ci_emp, edad_emp, paga_emp);
            }
            else{
                int horas_jorn;
                cout << "Horas del empleado: ";
                cin >> horas_jorn;
                // Jornalero emp_jornal(nombre_emp, ci_emp, edad_emp, paga_emp);
            }
            break;
        case 3:
            /* code */
            break;
        case 4:
            /* code */
            break;
        case 0:
            salir = false;
            break;
        }

    }
    return 0;
}