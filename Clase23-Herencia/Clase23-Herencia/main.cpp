//
//  main.cpp
//  Clase23-Herencia
//
//  Created by Sergio Pita on 29/4/15.
//  Copyright (c) 2015 Sergio Pita. All rights reserved.
//

#include <iostream>
using namespace std;

class Figura {
    
protected:
    string id;
};

class Cuadrilatero : public Figura{
    
};

class Triangulo : public Figura{
    
};

class Rectangulo : public Cuadrilatero{
    
protected:
    
    double static areaRectangulo(int base, int altura){
        
        double area;
        area = base * altura;
        
        return area;
    }
};

int main(int argc, const char * argv[]) {
    
    Cuadrilatero cuadrilatero;
    
    //cuadrilatero.id = 1;
    
    Triangulo triangulo;
    
    Rectangulo rectangulo;
    
    int base, altura;
    
    cout << "dame la altura del cuadrado" << endl;
    cin >> altura;
    
    cout << "dame la base del cuadrado" << endl;
    cin >> base;
    
    cout << rectangulo.areaRectangulo(base, altura) << endl;
    
    return 0;
}
