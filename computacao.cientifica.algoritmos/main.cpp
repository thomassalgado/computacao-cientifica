//
//  main.cpp
//  computacao.cientifica.algoritmos
//
//  Created by Rafael Thomas Salgado on 07/06/17.
//  Copyright © 2017 Rafael Thomas Salgado. All rights reserved.
//

#include <iostream>
#include "Pilha.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    Pilha p;
    p.empilha("Ola");
    //cout << p.desempilha() << "\n";
    p.empilha("Ola2");
    cout << p.desempilha() << "\n";
    p.empilha("Ola3");
    //cout << p.desempilha() << "\n";
    p.empilha("Ola4");
    //cout << p.desempilha() << "\n";
    p.empilha("Ola5");
    //cout << p.desempilha() << "\n";
    p.empilha("Ola6");
    //cout << p.desempilha() << "\n";
    p.empilha("Ola7");
    //cout << p.desempilha() << "\n";
    cout << "Elemento no topo \"" << p.topo() << "\"\n";
    return 0;
}
