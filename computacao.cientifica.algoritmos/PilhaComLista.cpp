//
//  PilhaComLista.cpp
//  computacao.cientifica.algoritmos
//
//  Created by Rafael Thomas Pontes Salgado on 18/06/17.
//  Copyright © 2017 Rafael Thomas Salgado. All rights reserved.
//

#include "PilhaComLista.hpp"

void PilhaComLista::empilha(string entrada){
    Lista::inserir(entrada);
}

No * PilhaComLista::desempilha(){
    return Lista::remover();
}

No * PilhaComLista::topo(){
    return Lista::getFim();
}
