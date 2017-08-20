//
//  Funcao.cpp
//  computacao.cientifica.algoritmos
//
//  Created by Rafael Thomas Salgado on 16/08/17.
//  Copyright © 2017 Rafael Thomas Salgado. All rights reserved.
//

#include "Funcao.hpp"

struct TooManyInterationsException : public std::exception {
    const char * what () const throw () {
        return "Too Many Interations";
    }
};

double Funcao::derivar(double x){
    return(func(x + DELTA_X) - func(x))/DELTA_X;
}

double Funcao::executarNewtonRaphson(double x){
    double fValue = func(x);
    double value = x;
    int contador = 0;
    
    try {
        while(fValue != 0){
        
            if(contador > MAX_CONTADOR){
                throw TooManyInterationsException();
            }
            
            double inclinacao = derivar(value);
            double tmpValue = value + TAXA_APRENDIZAGEM * -fValue * (1/inclinacao);
            double tmpFValue = func(tmpValue);
        
            if(tmpFValue >= fValue){
                std::cout << "valor encontrado em " << contador << " iteracoes\n";
                break;
            } else {
                fValue = tmpFValue;
                value = tmpValue;
            }
            contador++;
        }
    } catch (TooManyInterationsException& e){
        std::cout << "Excecao ocorrida, retornando menor valor encontrado\n";
    }
    return fValue;
}

double Funcao::executarDescidaGradiente(double x){
    double fValue = func(x);
    double value = x;
    int contador = 0;
    try {
        while(fValue != 0){
            if(contador > MAX_CONTADOR){
                throw TooManyInterationsException();
            }
            double inclinacao = derivar(value);
            double tmpValue = value - (TAXA_APRENDIZAGEM * inclinacao);
            double tmpFValue = func(tmpValue);
        
            if(tmpFValue >= fValue){
                std::cout << "valor encontrado em " << contador << " iteracoes\n";
                break;
            } else {
                fValue = tmpFValue;
                value = tmpValue;
            }
            contador++;
        }
    } catch (TooManyInterationsException& e){
        std::cout << "Excecao ocorrida, retornando menor valor encontrado\n";
    }
    return fValue;
}
