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
    
public:
    
    string getId() const {
        return id;
    }
    
    void setId(string id){
        this->id = id;
    }
};

class Cuadrilatero : public Figura{
    
};

class Triangulo : public Figura{
    
};

class Rectangulo : public Cuadrilatero{
    
public:
    
    static double areaRectangulo(int base, int altura){
        
        double area;
        
        area = base * altura;
        
        return area;
    }

};

int main(int argc, const char * argv[]) {
    
    Cuadrilatero cuadrilatero;
    
    cuadrilatero.setId("Cuadrilatero 1");
    
    Triangulo triangulo;
    
    triangulo.setId("Triangulo 1");
    
    Rectangulo rectangulo;
    
    rectangulo.setId("rectangulo 1");
    
    
    
    int base, altura;
    
    cout << "dame la altura del cuadrado" << endl;
    cin >> altura;
    
    cout << "dame la base del cuadrado" << endl;
    cin >> base;
    
    Rectangulo::areaRectangulo(base, altura);
    
    return 0;
}
