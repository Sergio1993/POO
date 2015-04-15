//
//  main.cpp
//  Clase09-Interfaces _.h_.cpp
//
//  Created by Sergio Pita on 20/1/15.
//  Copyright (c) 2015 Sergio Pita. All rights reserved.
//

#include <iostream>
#include "Cubo.h"
#include "Cilindro.h"
#include "Cono.h"
#include "Piramide.h"

using namespace std;

int main(int argc, const char * argv[]) {
    cout << "=========FIGURAS GEOMETRICAS=========" << endl;
    
    cout << "CUBO" << endl;
    
    Cubo cubo1;
    cubo1.volumenCubo(4);
    cout << "Area del cubo: " << cubo1.areaCubo(2) <<endl;
    
    Cubo cubo2(3,4);
    cout << "Altura del cubo2: " << cubo2.getAltura() <<endl;
    cout << "Base del cubo2: " << cubo2.getBase() <<endl << endl;
    
    cout << "CILINDRO" << endl;
    
    Cilindro cilindro1;
    cilindro1.volumenCilindro(4.3, 5.5);
    cout << "Area del cilindro: " << cilindro1.areaCilindro(2.1, 3.4) <<endl;
    
    Cilindro cilindro2(4.5,6.7);
    cout << "Altura del cilindro2: " << cilindro2.getAltura() <<endl;
    cout << "Radio del cilindro2: " << cilindro2.getRadio() <<endl << endl;
    
    cout << "PIRAMIDE" << endl;
    
    Piramide piramide1;
    piramide1.volumenPiramide(5, 5);
    cout << "Area de la piramide: " << piramide1.areaPiramide(2, 2) <<endl;
    
    Piramide piramide2(3, 4, 5);
    cout << "Altura de la piramide2: " << piramide2.getAltura() <<endl;
    cout << "Arista de la piramide2: " << piramide2.getArista() <<endl;
    cout << "Base de la piramide2: " << piramide2.getBase() <<endl << endl;
    
    cout << "CONO" << endl;
    
    Cono cono1;
    cono1.volumenCono(5.6, 7.8);
    cout << "Area del cono: " << cono1.areaCono(2.4, 3.7, 6.8) <<endl;
    
    Cono cono2(3.5, 4.9);
    cout << "Altura del cono2: " << cono2.getAltura() <<endl;
    cout << "Radio del cono2: " << cono2.getRadio() <<endl;
    
    return 0;
}
