//
//  Lista.cpp
//  computacao.cientifica.algoritmos
//
//  Created by Rafael Thomas Pontes Salgado on 18/06/17.
//  Copyright © 2017 Rafael Thomas Salgado. All rights reserved.
//

#include "Lista.hpp"

void Lista::inserir(string dado){
    if (inicio == NULL) {
        inicio = new No(dado);
        fim = inicio;
        elementos++;
    } else {
        No *novoNo = new No(dado);
        fim->setPosterior(novoNo);
        novoNo->setAnterior(fim);
        fim = novoNo;
        elementos++;
    }
}

void Lista::inserirInicio(string dado){
    if (inicio == NULL) {
        inicio = new No(dado);
        fim = inicio;
        elementos++;
    } else {
        No *novoNo = new No(dado);
        novoNo->setPosterior(inicio);
        inicio->setAnterior(novoNo);
        inicio = novoNo;
        elementos++;
    }
}

No * Lista::remover(){
    if(fim != NULL){
        No *retorno = fim;
        if(fim->getAnterior() != NULL){
            fim->getAnterior()->setPosterior(NULL);
            fim = fim->getAnterior();
        } else {
            fim = NULL;
            inicio = NULL;
        }
        elementos--;
        retorno->setAnterior(NULL);
        retorno->setPosterior(NULL);
        return retorno;
    } else {
        return NULL;
    }
}

No * Lista::removerInicio(){
    if(inicio != NULL){
        No *retorno = inicio;
        if(inicio->getPosterior() != NULL){
            inicio->getPosterior()->setAnterior(NULL);
            inicio = inicio->getPosterior();
        } else {
            fim = NULL;
            inicio = NULL;
        }
        elementos--;
        retorno->setAnterior(NULL);
        retorno->setPosterior(NULL);
        return retorno;
    } else {
        return NULL;
    }
}

long Lista::size(){
    return elementos;
}

ostream& operator<<(ostream& os, const Lista& list)
{
    No *leitura = list.inicio;
    os << '[';
    while(leitura != NULL){
        os <<  '"' << leitura->getDado() << '"';
        leitura = leitura->getPosterior();
        if(leitura != NULL){
            os <<  ',';
        }
    }
    os << ']';
    return os;
}

