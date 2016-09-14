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
    NdoInt* p = orig.inicio;
    if (p == 0)
        inicio = 0;
    else {
        inicio = new NdoInt(orig.inicio->dato);
        p = p->sgt;
        NdoInt* ultimo = inicio;
        while(p != 0){ // mientras no se acabe orig.
            ultimo->sgt = new NdoInt(p->dato);
            p = p->sgt;
            ultimo = ultimo->sgt;
        }
    }
}

CnjOrdInt::~CnjOrdInt() {

}

bool CnjOrdInt::insertarOrd(int x) {

}

bool CnjOrdInt::eliminar(int x) {

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