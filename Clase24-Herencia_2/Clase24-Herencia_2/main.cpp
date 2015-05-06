//
//  main.cpp
//  Clase24-Herencia_2
//
//  Created by Sergio Pita on 6/5/15.
//  Copyright (c) 2015 Sergio Pita. All rights reserved.
//

#include <iostream>
using namespace std;

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
}
