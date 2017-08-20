//
//  Funcao.cpp
//  computacao.cientifica.algoritmos
//
//  Created by Rafael Thomas Salgado on 16/08/17.
//  Copyright © 2017 Rafael Thomas Salgado. All rights reserved.
//

#include "Funcao.hpp"

/*
 * Struct que define uma excecao utilizada para um numero elevado de iteracoes
 */
struct TooManyInterationsException : public std::exception {
    const char * what () const throw () {
        return "Too Many Interations";
    }
};

/*
 * Funcao responsavel pelo calculo da derivada aproximada da funcao
 */
double Funcao::derivar(double x){
    return(func(x + DELTA_X) - func(x))/DELTA_X;
}

/*
 * Executa o metodo de Newton Raphson
 */
double Funcao::executarNewtonRaphson(double x){
    double fValue = func(x);
    double value = x;
    int contador = 0;
    
    try {
        while(fValue != 0){
        
            if(contador > MAX_CONTADOR){
                /*
                 * Numero elevado de iteracoes, lancando excecao
                 */
                throw TooManyInterationsException();
            }
            
            double inclinacao = derivar(value);
            double tmpValue = value + TAXA_APRENDIZAGEM * -fValue * (1/inclinacao);
            double tmpFValue = func(tmpValue);
        
            if(tmpFValue >= fValue){
                /*
                 * Minimo encontrado, rompendo o loop para retorno do mesmo
                 */
                std::cout << "valor encontrado em " << contador << " iteracoes\n";
                break;
            } else {
                /*
                 * Valor não encontrado, ajustando valores para a proxima iteracao
                 */
                fValue = tmpFValue;
                value = tmpValue;
            }
            contador++;
        }
    } catch (TooManyInterationsException& e){
        /*
         * Tratamento da excecao, o menor valor encontrado é retornado
         */
        std::cout << "Excecao ocorrida, retornando menor valor encontrado\n";
    }
    return fValue;
}

/*
 * Executao método de descida de gradiente
 */
double Funcao::executarDescidaGradiente(double x){
    double fValue = func(x);
    double value = x;
    int contador = 0;
    try {
        while(fValue != 0){
            if(contador > MAX_CONTADOR){
                /*
                 * Numero elevado de iteracoes, lancando excecao
                 */
                throw TooManyInterationsException();
            }
            double inclinacao = derivar(value);
            double tmpValue = value - (TAXA_APRENDIZAGEM * inclinacao);
            double tmpFValue = func(tmpValue);
        
            if(tmpFValue >= fValue){
                /*
                 * Minimo encontrado, rompendo o loop para retorno do mesmo
                 */
                std::cout << "valor encontrado em " << contador << " iteracoes\n";
                break;
            } else {
                /*
                 * Valor não encontrado, ajustando valores para a proxima iteracao
                 */
                fValue = tmpFValue;
                value = tmpValue;
            }
            contador++;
        }
    } catch (TooManyInterationsException& e){
        /*
         * Tratamento da excecao, o menor valor encontrado é retornado
         */
        std::cout << "Excecao ocorrida, retornando menor valor encontrado\n";
    }
    return fValue;
}
