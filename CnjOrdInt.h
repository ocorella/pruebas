/* 
 * File:   CnjOrdInt.h
 * Author: alan.calderon
 *
 * Created on 5 de agosto de 2015, 05:37 PM
 */

#ifndef CNJORDINT_H
#define	CNJORDINT_H

#include <string>
#include <iostream>
#include <sstream>
using namespace std;

class CnjOrdInt {
    // Representa un conjunto ordenado de enteros.
    
public:
    // EFE: construye un nuevo conjunto de enteros vacío.
    CnjOrdInt();
    
    // EFE: construye una copia idéntica e independiente de "orig".
    CnjOrdInt(const CnjOrdInt& orig);
    
    ~CnjOrdInt();
    
    // MOD: *this.
    // EFE: Si x no pertenece *this, entonces lo agrega preservando el orden y
    // retorna true, en caso contrario, no tiene efecto y retorna false.
    bool insertarOrd(int x);
    
    // MOD: *this.
    // EFE: Si x pertenece a *this, entonces lo elimina preservando el orden y
    // retorna true, en caso contrario, no tiene efecto y retorna false.
    bool eliminar(int x);
    
    // EFE: retorna true si x pertenece a *this o false en caso contrario.
    bool buscar(int x) const;
    
    // EFE: retorna un nuevo conjunto ordenado que representa la unión de *this con b.
    CnjOrdInt& operator+(const CnjOrdInt& b) const;
    
    // EFE: retorna un nuevo conjunto ordenado que representa la intersección de *this con b.
    CnjOrdInt& operator*(const CnjOrdInt& b) const;    
    
    // EFE: retorna un nuevo conjunto ordenado que representa la diferencia de *this con b.
    CnjOrdInt& operator-(CnjOrdInt& b);  
    
    // EFE: retorna un nuevo conjunto ordenado que representa la diferencia simétrica de *this con b.
    CnjOrdInt& operator/(CnjOrdInt& b); 
    
    // EFE: retornar una hilera que representa a *this.
    // Por ejemplo: "{}" para el conjunto vacío y "{ 1, 2, 3 }"
    string aHil();

    // EFE: Envía a stdout texto correspondiente a los valores del conjunto.
    void imprimir();
    
private:
    struct NdoInt {
        int dato;
        NdoInt* sgt;
        NdoInt(int x):dato(x),sgt(0){};
        ~NdoInt(){ cout << "borrando: " << dato << endl; };
    };
    
    NdoInt* inicio;
};

#endif	/* CNJORDINT_H */

