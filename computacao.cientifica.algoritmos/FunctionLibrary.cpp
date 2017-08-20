//
//  FunctionLibrary.cpp
//  computacao.cientifica.algoritmos
//
//  Created by Rafael Thomas Pontes Salgado on 20/08/17.
//  Copyright © 2017 Rafael Thomas Salgado. All rights reserved.
//

#include "FunctionLibrary.hpp"

double FunctionLibrary::exec01(double x){
    return pow(x, 2.0);
}

double FunctionLibrary::exec02(double x){
    return pow(x, 3.0) - (2 * (pow(x, 2.0))) + 2;
}

double FunctionLibrary::exec03(double x, double y){
    return pow(1 - x, 2.0) + (pow(1 - y,2.0));
}

double FunctionLibrary::exec04(double x, double y){
    return pow(1 - y, 2.0) + 100 * pow(x - pow(y, 2), 2);
}
