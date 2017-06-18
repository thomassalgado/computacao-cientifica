//
//  No.cpp
//  computacao.cientifica.algoritmos
//
//  Created by Rafael Thomas Pontes Salgado on 18/06/17.
//  Copyright © 2017 Rafael Thomas Salgado. All rights reserved.
//

#include "No.hpp"

No::No(string valor){
    dado = valor;
    anterior = NULL;
    posterior = NULL;
}

string No::getDado(){
    return dado;
}

void No::setAnterior(No *novoAnterior){
    anterior = novoAnterior;
}

void No::setPosterior(No *novoPosterior){
    posterior = novoPosterior;
}

No * No::getAnterior(){
    return anterior;
}

No * No::getPosterior(){
    return posterior;
}
