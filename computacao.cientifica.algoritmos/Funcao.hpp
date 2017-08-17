//
//  Funcao.hpp
//  computacao.cientifica.algoritmos
//
//  Created by Rafael Thomas Salgado on 16/08/17.
//  Copyright © 2017 Rafael Thomas Salgado. All rights reserved.
//

#ifndef Funcao_hpp
#define Funcao_hpp

#define DELTA_X 0.0001
#define TAXA_APRENDIZAGEM 0.1

#include <stdio.h>
#include <iostream>
#include <string>

#endif /* Funcao_hpp */

class Funcao {
private:
    
public:
    double (*func)(double x);
    double derivar(double x);
    double executarNewtonRaphson(double x);
};
