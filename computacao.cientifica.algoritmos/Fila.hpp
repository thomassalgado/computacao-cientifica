//
//  Fila.hpp
//  computacao.cientifica.algoritmos
//
//  Created by Rafael Thomas Salgado on 08/06/17.
//  Copyright © 2017 Rafael Thomas Salgado. All rights reserved.
//

#ifndef Fila_hpp

#define Fila_hpp
#define SIZE 1000
#include <stdio.h>
#include <string>
#include <iostream>

#endif /* Fila_hpp */

using namespace std;

class Fila {
private:
    string memoria[SIZE];
    int inicio;
    int fim;
    int elementos;
    
public:
    Fila();
    string desenfileira();
    void enfileira(string entrada);
    int qtdElementos();
};



