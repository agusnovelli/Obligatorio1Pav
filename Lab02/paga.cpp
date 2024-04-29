#include <iostream>
#include "paga.h"

using namespace std;

Paga::Paga() {
    monto=0;
    moneda=uy;
}

Paga::Paga(float monto, Moneda moneda) {
    this->monto=monto;
    this->moneda=moneda;
}

Paga Paga::a_dolar() {
    if(this->moneda==usd) {
        float cambio = Cambio::a_pesos(this->monto);
        return Paga(cambio,moneda);
    }
    else {
        float cambio = Cambio::a_dolar(this->monto);
        return Paga(cambio,moneda);
    }
}

Paga Paga::a_pesos() {
    if(this->moneda==uy) {
        float cambio = Cambio::a_dolar(this->monto);
        return Paga(cambio,moneda);
    }
    else {
        float cambio = Cambio::a_pesos(this->monto);
        return Paga(cambio,moneda);
    }
}

float Paga::get_monto(){
    return monto;
}
