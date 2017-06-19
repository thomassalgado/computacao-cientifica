//
//  PilhaComLista.hpp
//  computacao.cientifica.algoritmos
//
//  Created by Rafael Thomas Pontes Salgado on 18/06/17.
//  Copyright © 2017 Rafael Thomas Salgado. All rights reserved.
//

#pragma once

#ifndef PilhaComLista_hpp
#define PilhaComLista_hpp

#include <stdio.h>
#include <string>
#include "Lista.hpp"

#endif /* PilhaComLista_hpp */

using namespace std;

/*
 * Pilha implementada com lista duplamente ligada
 */
class PilhaComLista : public Lista{
public:
    /*
     * Empilha um elemento
     */
    void empilha(string entrada);
    /*
     * Desempilha um elemento
     */
    No * desempilha();
    /*
     * Retorna o topo da pilha sem desempilha-lo
     */
    No * topo();
};
