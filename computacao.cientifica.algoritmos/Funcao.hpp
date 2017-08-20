//
//  Funcao.hpp
//  computacao.cientifica.algoritmos
//
//  Created by Rafael Thomas Salgado on 16/08/17.
//  Copyright © 2017 Rafael Thomas Salgado. All rights reserved.
//

#ifndef Funcao_hpp
#define Funcao_hpp
/*
 * Definindo valor de DELTA X
 */
#define DELTA_X 0.0001
/*
 * Definindo taxa de aprendizagem
 */
#define TAXA_APRENDIZAGEM 0.1
/*
 * Numero maximo de itracoes permitidas
 */
#define MAX_CONTADOR 1000

#include <stdio.h>
#include <iostream>
#include <string>
#include <exception>

#endif /* Funcao_hpp */

class Funcao {
private:
    
public:
    /*
     * Ponteiro para a funcão que serao utilizada
     */
    double (*func)(double x);
    double derivar(double x);
    double executarNewtonRaphson(double x);
    double executarDescidaGradiente(double x);
};
