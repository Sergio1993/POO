//
//  Factura.h
//  Proyecto01
//
//  Created by Sergio Pita on 23/3/15.
//  Copyright (c) 2015 Sergio Pita. All rights reserved.
//

#ifndef __Proyecto01__Factura__
#define __Proyecto01__Factura__

#include <stdio.h>
#include <iostream>
using namespace std;

class Factura{
    
private:
    int identificador;
    
public:
    
    Factura();
    Factura(int);
    
    
    void setIdentificador(int);
    int getIdentificador() const;
    
    void crearFactura();
    void leerFactura();
    void guardarFactura();
    
    ~Factura();
};
#endif /* defined(__Proyecto01__Factura__) */
