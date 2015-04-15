//
//  main.cpp
//  Clase14-Puteros_1
//
//  Created by Sergio Pita on 24/2/15.
//  Copyright (c) 2015 Sergio Pita. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    //int *pUno = 0;
    
    char variableChar = 'a';
    char *pChar;
    pChar = &variableChar;
    
    cout << *pChar << endl;
    
    int  count = 10, *temp, sum = 0;
    
    temp = &count;
    *temp = 20;
    temp = &sum;
    *temp = count;
    printf("count = %d, *temp = %d, sum = %d\n", count, *temp, sum );
    
    int x = 8, y = 5, z = 3;
    int *pX = 0, *pY = 0, *pZ = 0;
    
    pY = &z;
    *pY = y;
    *pY = z;
    cout << z << endl;
    
    x = 8, y = 5, z = 3;
    
    pZ = &x;
    *pZ = z;
    *pZ = x;
    cout << x << endl;
    
    x = 8, y = 5, z = 3;
    
    pX = &y;
    *pX = x;
    *pX = y;
    cout << y << endl;
    
    return 0;
}
