//
//  main.cpp
//  Objetos-Constructor_Destructor
//
//  Created by Sergio Pita on 17/1/15.
//  Copyright (c) 2015 Sergio Pita. All rights reserved.
//

#include <iostream>
#include "personaje.h"

using namespace std;


int main(int argc, const char * argv[]) {
    Persona sergio(1232134);
    Persona pepe(711717171, "pepe");
    
    
    cout << "DNI de " << pepe.getNombre() << " con numero: "<< pepe.getDni() << endl;
    cout << sergio.getDni() << endl;
    return 0;
}