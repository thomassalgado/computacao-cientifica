//
//  FilaComLista.hpp
//  computacao.cientifica.algoritmos
//
//  Created by Rafael Thomas Pontes Salgado on 18/06/17.
//  Copyright © 2017 Rafael Thomas Salgado. All rights reserved.
//

#pragma once

#ifndef FilaComLista_hpp
#define FilaComLista_hpp

#include <stdio.h>
#include "Lista.hpp"


#endif /* FilaComLista_hpp */

/*
 * Estrutura de dados de fila implementada com lista duplamente ligada
 */
class FilaComLista : public Lista {
public:
    /*
     * Insere um elemento no fim da fila
     */
    void enfileira(string entrada);
    /*
     * remove um elemento do inicio da fila
     */
    No * desenfileira();
};
