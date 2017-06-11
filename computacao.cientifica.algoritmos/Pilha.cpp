//
//  Pilha.cpp
//  computacao.cientifica.algoritmos.pilha
//
//  Created by Rafael Thomas Salgado on 07/06/17.
//  Copyright © 2017 Rafael Thomas Salgado. All rights reserved.
//

#include "Pilha.hpp"

Pilha::Pilha(){
    posicaoTopo = 0;
}

void Pilha::empilha(string entrada){
    if(posicaoTopo < SIZE){
        memoria[posicaoTopo] = entrada;
        posicaoTopo++;
        cout << "Elemento \"" << entrada << "\" empilhado com sucesso\n";
    } else {
        cout << "A Pilha esta cheia\n";
    }
    return;
}

string Pilha::desempilha(){
    
    if(posicaoTopo == 0){
        cout << "A Pilha esta vazia\n";
        return "";
    } else {
        posicaoTopo--;
        string aux = memoria[posicaoTopo];
        memoria[posicaoTopo]="";
        return aux;
    }
}

string Pilha::topo(){
    if(posicaoTopo == 0){
        cout << "A Pilha esta vazia\n";
        return "";
    } else {
        return memoria[posicaoTopo - 1];
    }
}

int Pilha::qtdElementos(){
    return posicaoTopo;
}
