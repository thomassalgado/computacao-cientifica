//
//  mainFunc.cpp
//  computacao.cientifica.algoritmos
//
//  Created by Rafael Thomas Pontes Salgado on 20/08/17.
//  Copyright © 2017 Rafael Thomas Salgado. All rights reserved.
//

#ifndef mainFunc_cpp

#include <iostream>
#include <stdio.h>
#include <math.h>
#include "Funcao.hpp"
#include "FunctionLibrary.hpp"

#endif /* mainFunc_cpp */

using namespace std;

/*
 * Menu facilitador da execuçao dos testes
 */
int main(int argc, const char * argv[]) {
    
    string entrada;
    
    while(true){
        cout << "Digite:\n";
        cout << "1 Newton-Raphson\n";
        cout << "2 Descida de Gradiente\n";
        cout << "0 para Sair\n";
        getline (std::cin,entrada);
        if(entrada.compare("0") == 0){
            cout << "Ate breve\n";
            return 0;
        }else if(entrada.compare("1") == 0){
            cout << "Executando Newton-Raphson - Escolha a funcao digitando:\n";
            entrada = "";
            cout << "1 para f(x) = x²\n";
            cout << "2 para F(x) = x³-2x²+2\n";
            cout << "0 para sair\n";
            getline (std::cin,entrada);
            if(entrada.compare("1") == 0){
                Funcao func;
                /*
                 * Atribuindo funcao de calculo
                 */
                func.func = FunctionLibrary::exec01;
                double x = func.executarNewtonRaphson(2);
                printf("valor minimo = %f\n", x);
            } else if(entrada.compare("2") == 0){
                Funcao func;
                /*
                 * Atribuindo funcao de calculo
                 */
                func.func = FunctionLibrary::exec02;
                double x = func.executarNewtonRaphson(2);
                printf("valor minimo = %f\n", x);
            } else if(entrada.compare("0") == 0) {
                cout << "Ate breve\n";
                return 0;
            } else {
                cout << "Opcao invalida\n";
            }
        } else if (entrada.compare("2") == 0){
            cout << "Executando Descida de Gradiente - Escolha a funcao digitando:\n";
            entrada = "";
            cout << "1 para f(x) = x²" << endl;
            cout << "2 para f(x) = x³-2x²+2" << endl;
            getline (std::cin,entrada);
            if(entrada.compare("1") == 0){
                Funcao func;
                /*
                 * Atribuindo funcao de calculo
                 */
                func.func = FunctionLibrary::exec01;
                double x = func.executarDescidaGradiente(2);
                printf("valor minimo = %f\n", x);
            } else if(entrada.compare("2") == 0){
                Funcao func;
                /*
                 * Atribuindo funcao de calculo
                 */
                func.func = FunctionLibrary::exec02;
                double x = func.executarDescidaGradiente(2);
                printf("valor minimo = %f\n", x);
            } else if(entrada.compare("0") == 0) {
                cout << "Ate breve\n";
                return 0;
            } else {
                cout << "Opcao invalida\n";
            }
        } else {
            cout << "Opcao invalida\n";
        }
    }
    
    return 0;
}






