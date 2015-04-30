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
    
protected:
    int static areaRectangulo(int a, int b){
        
        double area;
        area = a * b;
        
        return area;
    }
};

class Triangulo : public Figura{
    
};

int main(int argc, const char * argv[]) {
    Cuadrilatero rectangulo;
    
    Figura triangulo;
    
    return 0;
}
