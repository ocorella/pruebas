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
    bool rsl = false;
    NdoInt* p = inicio;
    NdoInt* ant = 0;
    if (inicio == 0){ // se agrega el primer elemento a *this
        inicio = new NdoInt(x);
        rsl = true;
    } else if (inicio->dato > x){ // inserción antes del inicio
        p = new NdoInt(x); // se crea el nuevo nodo
        p->sgt = inicio; // se liga con el anterior inicio
        inicio = p; // se cambia inicio
        rsl = true;
    } else {
        p = inicio;
        while(p != 0){
            if (p->dato == x) // se encontró x en *this, no se agrega
                p = 0;
            else { // todavía no se encuentra pero puede que esté más adelante
                if (p->dato < x){
                    ant = p;
                    p = p->sgt;
                    if (p == 0) // hay que agregar x al final
                        rsl = true;
                } else { // se concluye que x no está en *this
                    p = 0;
                    rsl = true; // hay que agregarlo
                }
            }
        }
        if (rsl){ // sirve para agreggngfgnar en medio y al final
            p = ant->sgt; // p podría ser null o cero
            ant->sgt = new NdoInt(x);
            ant->sgt->sgt = p;
            
        }
    }
    return rsl;
}

bool CnjOrdInt::eliminar(int x) {

}

bool CnjOrdInt::buscar(int x) const {
	bool rsl = false;
	NdoInt* p = inicio;
	while(p != 0){
		if (p->dato == x){ // ya se encontró x en *this
			   rsl = true;
			   p = 0;
		   } else { // todavía no se encuentra pero puede que esté más adelante
			   if (p->dato < x)
				   p = p->sgt;
			   else // se concluye que x no está en *this
				   p = 0;
		   }
	   }
	   return rsl;

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
