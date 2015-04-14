//
//  main.cpp
//  Clase19-thisYreferencia
//
//  Created by Sergio Pita on 26/3/15.
//  Copyright (c) 2015 Sergio Pita. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;

class Triangulo{
    
public:
    
    int data = 0;
    
    void actualizarObjeto(Triangulo &tri){
        tri.data++;
    }
};

int main(int argc, const char * argv[]) {
    
    Triangulo tri;
    tri.actualizarObjeto(tri);
    
    cout << tri.data << endl;
    
    return 0;
}
