//
//  main.cpp
//  Clase25-Polimorfismo
//
//  Created by Sergio Pita on 14/5/15.
//  Copyright (c) 2015 Sergio Pita. All rights reserved.
//

#include <iostream>
using namespace std;

class Instrument{
public:
    Instrument(){}
    virtual void play(){
        cout << "Clase Instrument, método play" << endl;
    }
    char* what();
    virtual void adjust(){
        cout << "Clase Instrument, método adjust" << endl;
    }
};

class Wind : public Instrument{
public:
    Wind(){}
    void play(){
        cout << "Clase Wind, método play" << endl;
    }
    char* what();
    void adjust(){
        cout << "Clase Wind, método adjust" << endl;
    }
};

class Percussion : public Instrument{
public:
    Percussion(){}
    void play(){
        cout << "Clase Percussion, método play" << endl;
    }
    char* what();
    void adjust(){
        cout << "Clase Percussion, método adjust" << endl;
    }
};

class Stringed : public Instrument{
public:
    Stringed(){}
    void play(){
        cout << "Clase Stringed, método play" << endl;
    }
    char* what();
    void adjust(){
        cout << "Clase Stringed, método adjust" << endl;
    }
};

class Woodwind : public Wind{
public:
    Woodwind(){}
    void play(){
        cout << "Clase Woodwind, método play" << endl;
    }
    char* what();
};

class Brass : public Wind{
public:
    Brass(){}
    void play(){
        cout << "Clase Brass, método play" << endl;
    }
    char* what();
};

int main(int argc, const char * argv[]) {
    
    Instrument *instrumetWind = new Wind();
    Instrument *percussion = new Percussion();
    Instrument *stringed = new Stringed();
    Instrument *woodwind = new Woodwind();
    Instrument *brass = new Brass();
    
    cout << "=============PLAY=============" << endl;
    instrumetWind->play();
    percussion->play();
    stringed->play();
    woodwind->play();
    brass->play();
    
    cout << "=============ADJUST=============" << endl;
    
    instrumetWind->adjust();
    percussion->adjust();
    stringed->adjust();
    woodwind->adjust();
    brass->adjust();
    
    
    delete instrumetWind;
    delete percussion;
    delete stringed;
    delete woodwind;
    delete brass;
    
    return 0;
}