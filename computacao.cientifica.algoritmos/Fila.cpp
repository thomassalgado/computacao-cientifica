//
//  Fila.cpp
//  computacao.cientifica.algoritmos
//
//  Created by Rafael Thomas Salgado on 08/06/17.
//  Copyright © 2017 Rafael Thomas Salgado. All rights reserved.
//

#include "Fila.hpp"

Fila::Fila(){
    inicio = 0;
    fim = 0;
    elementos = 0;
}

void Fila::enfileira(string entrada){
    if(fim < SIZE){
        memoria[fim] = entrada;
        fim++;
        elementos++;
        cout << "Elemento \"" << entrada << "\" empilhado com sucesso\n";
    } else {
        cout << "A Fila esta cheia\n";
    }
    return;
}

string Fila::desenfileira(){
    if(inicio < SIZE && inicio < fim){
        string aux = memoria[inicio];
        memoria[inicio] = "";
        inicio++;
        elementos--;
        return aux;
    } else {
        return "A Fila esta vazia\n";
    }
}

int Fila::qtdElementos(){
    return elementos;
}
