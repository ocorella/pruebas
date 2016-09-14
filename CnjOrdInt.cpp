/* 
 * File:   CnjOrdInt.cpp
 * Author: alan.calderon
 * 
 * Created on 5 de agosto de 2015, 05:37 PM
 */

#include "CnjOrdInt.h"

CnjOrdInt::CnjOrdInt():inicio(0) {
}

CnjOrdInt::CnjOrdInt(const CnjOrdInt& orig) {

}

CnjOrdInt::~CnjOrdInt() {

}

bool CnjOrdInt::insertarOrd(int x) {

}

bool CnjOrdInt::eliminar(int x) {
    bool rsl = false;
    NdoInt* p = inicio;
    NdoInt* ant = 0;
    if ( inicio != 0 && inicio->dato <= x )
        if ( inicio->dato == x ){
            p = inicio->sgt;
            delete inicio;
            inicio = p;
        } else {
            while(p != 0){ // hay que buscar a x
                if (p->dato == x){
                    rsl = true;
                    p = 0;
                } else { // hay que seguir buscando
                    if (p->dato < x){
                        ant = p;
                        p = p->sgt;
                    } else p = 0; // no está y no nada que eliminar
                }
            }
            if (rsl){ // sí hay que eliminar en medio o al final
                p = ant->sgt->sgt;
                delete ant->sgt;
                ant->sgt = p;
            }
        }
    return rsl;
}

bool CnjOrdInt::buscar(int x) const {

}

CnjOrdInt& CnjOrdInt::operator+(const CnjOrdInt& b) const {
}

CnjOrdInt& CnjOrdInt::operator*(const CnjOrdInt& b) const {

}

CnjOrdInt& CnjOrdInt::operator-(const CnjOrdInt& b) const {
}

CnjOrdInt& CnjOrdInt::operator/(const CnjOrdInt& b) const {
}

string CnjOrdInt::aHil() {
   
}