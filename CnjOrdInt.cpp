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
