#include <iostream>
#include "paga.h"

using namespace std;

Paga::Paga() {
    monto=0;
    moneda=us;
}

Paga::Paga(float monto, Moneda moneda) {
    this->monto=monto;
    this->moneda=moneda;
}

Paga::~Paga() {

}

Paga Paga::a_dolar() {
    if(this->moneda==us) {
        float cambio = Cambio::a_peso(this->monto);
        return Paga(cambio,moneda);
    }
    else {
        float cambio = Cambio::a_dolar(this->monto);
        return Paga(cambio,moneda);
    }
}
