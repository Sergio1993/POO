//
//  main.cpp
//  Clase11_Loop
//
//  Created by Sergio Pita on 4/2/15.
//  Copyright (c) 2015 Sergio Pita. All rights reserved.
//

#include <iostream>
#include "Persona.h"
using namespace std;

int main(int argc, const char * argv[]) {
    //TAREA 0
    //Crea un programa que lea los números entrados por el usuario hasta que escriba el 0 y luego imprime el mayor.
    /*
    int numero;
    int num_mayor = 0;
    
    do{
        
        cout << "Introduzca un numero, 0 para salir" << endl;
        cin >> numero;
    
        if (numero > num_mayor){
            num_mayor = numero;
        }
        else{
            num_mayor = num_mayor;
        }
        
    }while(numero!=0);
    
    cout << "El numero mayor es: " << num_mayor << endl;
    */
    
    /*
     Tarea 1
     
     Muestra simultaneamente los múltiplos de 3 y 5 desde el 15 y hasta el 45
     
    
    int num = 0;
    do{
        if(num%3 == 0){
            cout << "Multiplo de 3: " << num << endl;
        }
        if (num%5 == 0){
            cout << "Multiplo de 5: "<< num << endl;
        }
        num++;
    }while (num < 45);
    
*/
    
    /*
     Tarea 2
     
     Crea un programa que lea los números entrados por el usuario hasta que escriba el 44 o el 99 e imprime los números pares que este entre.
     (Ayudate del operador modulo %, el cual devuelve el resto de una división entera).
     
    int numero;
    
    
    do{
        cout << "Introduzca un numero, 44 ó 99 para salir" << endl;
        cin >> numero;
        if(numero == 44 || numero ==99){
            continue;
        }else{
            if (numero%2 == 0){
                cout << "El numero "<< numero << " es par" << endl;
            }else{
                cout << "El numero "<< numero << " no es par" << endl;
            }
        }
        
    }while(numero != 44 && numero != 99);
    
    */
    
    int numPasteles = 0;
    int maximo = 0;
    int persona = 0;
    Persona personas[10];
    
    for (int i = 0; i < 10; i++) {
        cout << "Pasteles que ha comido la persona " << i+1 << endl;
        cin >> numPasteles;
        personas[i].setNumeroPasteles(numPasteles);
        
        if (maximo < personas[i].getNumeroPasteles()) {
                maximo = personas[i].getNumeroPasteles();
                persona = i+1;
        }
    }
    cout << "El mayor numero de pasteles comidos es: " << maximo << ", por la persona " << persona << endl;

    
    return 0;
}
