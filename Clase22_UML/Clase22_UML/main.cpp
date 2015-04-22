//
//  main.cpp
//  Clase22_UML
//
//  Created by Sergio Pita on 22/4/15.
//  Copyright (c) 2015 Sergio Pita. All rights reserved.
//

#include <iostream>
#include <string.h>
using namespace std;
string mayusculas(string &resp){
    
    for(int i = 0; i < resp.length(); i++){
        resp[i] = toupper(resp[i]);
    }
    
    return resp;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    //TAREA 1
    bool lamparaEnchufada = true;
    bool ampolletaQuemada = false;
    string respuestaUno = "";
    string respuestaDos = "";
    
    cout << "¿La lampara esta enchufada?" << endl;
    cin >> respuestaUno;
    
    mayusculas(respuestaUno);

    if (respuestaUno == "SI"){
        
        lamparaEnchufada = true;
        cout << "¿Esta quemada la ampolleta?" << endl;
        cin >> respuestaDos;
        
    }else if (respuestaUno == "NO"){
        
        lamparaEnchufada = false;
        cout << "Enchufar la lampara" << endl;
    }
    
    mayusculas(respuestaDos);
    
    if (respuestaDos == "SI"){
        
        ampolletaQuemada = true;
        cout << "Cambiar la ampolleta" << endl;
        
    }else if (respuestaDos == "NO"){
        
        ampolletaQuemada = false;
        cout << "Comprar la lampara" << endl;
        
    }

    return 0;
}
