//
//  main.cpp
//  Clase24-Herencia_2
//
//  Created by Sergio Pita on 6/5/15.
//  Copyright (c) 2015 Sergio Pita. All rights reserved.
//

#include <iostream>
using namespace std;

//TAREA 0
/*
class Coche{
public:
    Coche(){}
    Coche(int date){
        cout << "Constructo de coche" << endl;
    }
    ~Coche(){}
};

class Vw : public Coche{
    
public:
    
    Vw(int date) : Coche(date){
        cout << "constructor de Vw" << endl;
    }
};

class Toyota : public Coche{
    
public:
    Toyota(){}
};

int main(int argc, const char * argv[]) {
    
    Vw vw(0);
    
    Toyota toyota;
    
    return 0;
}*/

//TAREA 1
class Figure{
public:
    Figure(){}
    ~Figure(){}
};

class OpenFigure : Figure{
public:
    OpenFigure(){}
    ~OpenFigure(){}
};

class Line : OpenFigure{
public:
    Line(){}
    ~Line(){}
};

class ClosedFigure : Figure{
public:
    ClosedFigure(){}
};

class Polygon: ClosedFigure{
public:
    Polygon(){}
};

class Eclipse : ClosedFigure{
public:
    Eclipse(){}
};

class Circle : Eclipse{
public:
    Circle(){}
};

class Triangle : Polygon{
public:
    Triangle(){}
};

class Rectangle : Polygon{
public:
    Rectangle(){}
};

class Hexagon : Polygon{
public:
    Hexagon(){}
};

class Square : Rectangle{
public:
    Square(){}
};

int main(int argc, const char * argv[]) {
    
    OpenFigure open1;
    Line line;
    ClosedFigure cf;
    Polygon poly;
    Eclipse eclipse;
    Circle circle;
    Triangle tri;
    Hexagon hexa;
    Square square;
    
    
    return 0;
}
