//
//  main.cpp
//  clase15-punteros2
//
//  Created by Sergio Pita on 10/3/15.
//  Copyright (c) 2015 Sergio Pita. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    //TAREA 0
    int numbers [10];
    int * mypointer;
    
    
    mypointer = numbers;
    for (int i = 0; i<10; i++){
        mypointer[i] = (i+1)*100;
        cout << mypointer[i] << "\t ";
    }
    
    //TAREA 1
    void * puntero;
    puntero = (int *)numbers;
    
    //TAREA 2
    const int MAX = 3;
    int  var[MAX] = {10, 100, 200};
    int  *ptr;
    
    // let us have address of the last element in pointer.
    ptr = &var[MAX-1];
    for (int i = MAX; i > 0; i--)
    {
        cout << "Address of var[" << i << "] = ";
        cout << ptr << endl;
        
        cout << "Value of var[" << i << "] = ";
        cout << *ptr << endl;
        
        // point to the previous location
        ptr--;
    }
    return 0;
}
