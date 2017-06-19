//
//  FilaComLista.cpp
//  computacao.cientifica.algoritmos
//
//  Created by Rafael Thomas Pontes Salgado on 18/06/17.
//  Copyright © 2017 Rafael Thomas Salgado. All rights reserved.
//

#include "FilaComLista.hpp"

No * FilaComLista::desenfileira(){
    return Lista::removerInicio();
}

void FilaComLista::enfileira(string entrada){
    Lista::inserir(entrada);
}
