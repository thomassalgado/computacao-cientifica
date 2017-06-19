//
//  Lista.hpp
//  computacao.cientifica.algoritmos
//
//  Created by Rafael Thomas Pontes Salgado on 18/06/17.
//  Copyright © 2017 Rafael Thomas Salgado. All rights reserved.
//

#pragma once

#ifndef Lista_hpp
#define Lista_hpp

#include <stdio.h>
#include <string>
#include <iostream>
#include "No.hpp"

#endif /* Lista_hpp */

using namespace std;
/*
 * Estrutura de dados Lista duplamente ligada
 */
class Lista {
private:
    /*
     * Ponteiro para o primeiro elemento da lista
     */
    No *inicio;
    /*
     * Ponteiro para o ultimo elemento da lista
     */
    No *fim;
    /*
     * Contador de elementos
     */
    long elementos;
public:
    /*
     * Insere um novo elemento no fim da lista
     */
    void inserir(string dado);
    /*
     * Insere um novo elemento no inicio da lista
     */
    void inserirInicio(string dado);
    /*
     * Remove um elemento do fim da lista
     */
    No * remover();
    /*
     * Remove um elemento do inicio da lista
     */
    No * removerInicio();
    /*
     * Retorna o primeiro elemento da lista
     */
    No * getInicio();
    /*
     * Retorna o ultimo elemento da lista
     */
    No * getFim();
    /*
     * Retorna o tamanho da lista
     */
    long size();
    /*
     * Sobrecarga para impressão da lista
     */
    friend ostream& operator<<(ostream& os, const Lista& dt);
};
