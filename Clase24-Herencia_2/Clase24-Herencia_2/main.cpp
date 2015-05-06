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
    
    Coche(int date){
        
    }
    ~Coche(){}
};

class Vw : public Coche{
    
};

class Toyota : public Coche{
    
};

int main(int argc, const char * argv[]) {
    Vw vw;
    
    
    
    return 0;
}
