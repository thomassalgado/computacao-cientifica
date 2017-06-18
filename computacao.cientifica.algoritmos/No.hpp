//
//  No.hpp
//  computacao.cientifica.algoritmos
//
//  Created by Rafael Thomas Pontes Salgado on 18/06/17.
//  Copyright © 2017 Rafael Thomas Salgado. All rights reserved.
//

#ifndef No_hpp
#define No_hpp

#include <stdio.h>
#include <string>

#endif /* No_hpp */

using namespace std;

/*
 * Classe representando os dados que serao armazenados na lista
 */
class No {
private:
    /*
     * propriedade repesentando o dado armazenado
     */
    string dado;
    No *anterior;
    No *posterior;
public:
    /*
     * Construtor com parametro
     */
    No(string valor);
    /*
     * Get do valor armazenado
     */
    string getDado();
    /*
     * Atribui um novo valor para o ponteiro do Nó Anterior
     */
    void setAnterior(No *novoAnterior);
    /*
     * Atribui um novo valor para o ponteiro do Nó Posterior
     */
    void setPosterior(No *novoPosterior);
    /*
     * Retorna o novo valor para o ponteiro do Nó Anterior
     */
    No * getAnterior();
    /*
     * Retorna o valor para o ponteiro do Nó Posterior
     */
    No * getPosterior();
};

