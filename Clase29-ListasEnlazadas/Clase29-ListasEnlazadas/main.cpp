//
//  main.cpp
//  Clase29-ListasEnlazadas
//
//  Created by Sergio Pita on 14/7/15.
//  Copyright (c) 2015 Sergio Pita. All rights reserved.
//

#include <iostream>

class Node {
public:
    int data;
    Node *next;
};

int main(int argc, const char * argv[]) {
    
    Node *primerNodo = new Node;
    primerNodo->data = 5;
    primerNodo->next = NULL;
    
    Node *segundoNodo = new Node;
    segundoNodo->data = 6;
    segundoNodo->next = NULL;
    
    Node *tercerNodo = new Node;
    tercerNodo->data = 7;
    tercerNodo->next = NULL;
    
    return 0;
}
