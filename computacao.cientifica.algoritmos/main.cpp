//
//  main.cpp
//  computacao.cientifica.algoritmos
//
//  Created by Rafael Thomas Salgado on 07/06/17.
//  Copyright © 2017 Rafael Thomas Salgado. All rights reserved.
//


#ifndef main_cpp

#include <iostream>
//#include "Pilha.hpp"
//#include "Fila.hpp"
//#include "PilhaComLista.hpp"
//#include "FilaComLista.hpp"
#include "Funcao.hpp"

#endif /* main_cpp */


using namespace std;

/*int main(int argc, const char * argv[]) {
  
    string entrada;
    PilhaComLista pilha;
    FilaComLista fila;

    while(true){
        cout << "Digite:\n";
        cout << "1 para Pilha\n";
        cout << "2 para Fila\n";
        cout << "0 para Sair\n";
        getline (std::cin,entrada);
        if(entrada.compare("0") == 0){
            cout << "Ate breve\n";
            return 0;
        }else if(entrada.compare("1") == 0){
            cout << "Operacoes em Pilha\n";
            entrada = "";
            cout << "Digite:\n";
            cout << "1 para Inserir\n";
            cout << "2 para Remover\n";
            cout << "3 para tamanho da fila\n";
            getline (std::cin,entrada);
            if(entrada.compare("1") == 0){
                cout << "Digite o valor a ser inserido\n";
                entrada = "";
                getline (std::cin,entrada);
                pilha.empilha(entrada);
            } else if(entrada.compare("2") == 0){
                pilha.desempilha();
            } else if(entrada.compare("3") == 0) {
                cout << "A estrutura possui " << pilha.size() << " elementos\n";
            } else {
               cout << "Opcao invalida\n";
            }
        } else if (entrada.compare("2") == 0){
            cout << "Operacoes em Fila\n";
            entrada = "";
            cout << "Digite:\n";
            cout << "1 para Inserir\n";
            cout << "2 para Remover\n";
            cout << "3 para tamanho da fila\n";
            getline (std::cin,entrada);
            if(entrada.compare("1") == 0){
                cout << "Digite o valor a ser inserido\n";
                entrada = "";
                getline (std::cin,entrada);
                fila.enfileira(entrada);
            } else if(entrada.compare("2") == 0){
                fila.desenfileira();
            } else if(entrada.compare("3") == 0) {
                cout << "A estrutura possui " << fila.size() << " elementos\n";
            } else {
                cout << "Opcao invalida\n";
            }
            
        } else {
            cout << "Opcao invalida\n";
        }
    }

    return 0;
}*/

double multiplicar(double x){
    return x*x;
}

int main(int argc, const char * argv[]) {
    Funcao func;
    func.func = multiplicar;
    double x = func.executarNewtonRaphson(-2);
    //double x = func.derivar(-2);
    printf("x=%f\n", x);
    return 0;
}


