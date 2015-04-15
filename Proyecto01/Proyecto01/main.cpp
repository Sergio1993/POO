//
//  main.cpp
//  Proyecto01
//
//  Created by Sergio Pita on 20/3/15.
//  Copyright (c) 2015 Sergio Pita. All rights reserved.
//

#include <iostream>
#include <fstream>
#include "Factura.h"
#include "Clientes.h"
using namespace std;


int main(int argc, const char * argv[]) {
    
    int respuesta;
    int contadorIdFactura = 0;
    string salir;
    
    do{
        cout << "==============================" << endl;
        cout << "NUEVO PROGRAMA CONTAPLUS 2.0" << endl;
        cout << "==============================" << endl;
        cout << "Que desea realizar" << endl;
        cout << "1 - Crear factura" << endl;
        cout << "2 - Guardar factura" << endl;
        cout << "3 - Listar facturas" << endl;
        cout << "4 - Crear Clientes" << endl;
        cout << "5 - Guardar clientes" << endl;
        cout << "6 - Listar clientes" << endl;
        cout << "7 - Añadir clientes a Facturas" << endl;
        cout << "8 - Salir" << endl;
        cout << "==============================" << endl;
        cout << "ELIJA UNA OPCIÓN" << endl;
        cin >> respuesta;
    
        
        Factura factura;
        Clientes clientes;
    
        switch (respuesta) {
            case 1:
                factura.crearFactura();
                break;
            case 2:
                cout << "2" << endl;
                break;
            case 3:
                factura.leerFactura();
                break;
            case 4:
                clientes.crearClientes();
                break;
            case 5:
                cout << "5" << endl;
                contadorIdFactura++;
                break;
            case 6:
                clientes.listarClientes();
                contadorIdFactura++;
                break;
            case 7:
                cout << "7" << endl;
                contadorIdFactura++;
                break;
            case 8:
                exit(0);
            default:
                cout << "Opcion incorrecta" << endl;
                break;
        }
        cout << "desea continuar si/no" << endl;
        cin >> salir;
    }while(salir == "si");
    return 0;
}
