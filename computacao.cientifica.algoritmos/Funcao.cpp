//
//  Funcao.cpp
//  computacao.cientifica.algoritmos
//
//  Created by Rafael Thomas Salgado on 16/08/17.
//  Copyright © 2017 Rafael Thomas Salgado. All rights reserved.
//

#include "Funcao.hpp"

double Funcao::derivar(double x){
    return(func(x + DELTA_X) - func(x))/DELTA_X;
}

double Funcao::executarNewtonRaphson(double x){
    double fValue = func(x);
    double value = x;
    while(fValue != 0){
        
        std::cout << "valor de x" << value << "\n";
        std::cout << "valor de f " << fValue << "\n";
        double inclinacao = derivar(value);
        
        std::cout << "valor derivada" << inclinacao << "\n";
        
        value = value + TAXA_APRENDIZAGEM * -fValue * (1/inclinacao);
        fValue = func(value);
    }
    return fValue;
}
