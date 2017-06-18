//
//  Lista.hpp
//  computacao.cientifica.algoritmos
//
//  Created by Rafael Thomas Pontes Salgado on 18/06/17.
//  Copyright © 2017 Rafael Thomas Salgado. All rights reserved.
//

#ifndef Lista_hpp
#define Lista_hpp

#include <stdio.h>
#include <string>
#include <iostream>
#include "No.hpp"

#endif /* Lista_hpp */

using namespace std;

class Lista {
private:
    No *inicio;
    No *fim;
    long elementos;
public:
    void inserir(string dado);
    void inserirInicio(string dado);
    No * remover();
    No * removerInicio();
    long size();
    friend ostream& operator<<(ostream& os, const Lista& dt);
};
