//
//  PilhaComLista.hpp
//  computacao.cientifica.algoritmos
//
//  Created by Rafael Thomas Pontes Salgado on 18/06/17.
//  Copyright © 2017 Rafael Thomas Salgado. All rights reserved.
//

#ifndef PilhaComLista_hpp
#define PilhaComLista_hpp

#include <stdio.h>
#include <string>
#include "Lista.hpp"

#endif /* PilhaComLista_hpp */

using namespace std;

class PilhaComLista : public Lista{
public:
    void empilha(string entrada);
    No * desempilha();
    No * topo();
};
