//
//  Pilha.hpp
//  computacao.cientifica.algoritmos.pilha
//
//  Created by Rafael Thomas Salgado on 07/06/17.
//  Copyright © 2017 Rafael Thomas Salgado. All rights reserved.
//

#ifndef Pilha_hpp
#define Pilha_hpp
#define SIZE 1000

#include <stdio.h>
#include <string>
#include <iostream>

#endif /* Pilha_hpp */

using namespace std;

class Pilha {
private:
    string memoria[SIZE];
    int posicaoTopo;
    
public:
    Pilha();
    void empilha(string entrada);
    string desempilha();
    string topo();
    int qtdElementos();
};
