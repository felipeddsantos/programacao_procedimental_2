/*

Programação Procedimental II - Regressão Linear
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <stdio.h>
#include "matriz.h"

int main(){

    Matriz A, b, Ai, R, At;
    A = criarMatriz(10, 3);
    
    printf("Tabela de dados (insira 1 a cada nova linha):\n");
    preencherMatriz(A);  
    b = criarMatriz(10, 1);
    
    printf("\nTabela de resultados dependentes\n:");
    preencherMatriz(b);
    At = transposta(A);
    Ai = multiplicaMat(inversa(multiplicaMat(At, A)), At);
    R = multiplicaMat(Ai, b);
    imprimirMatriz(R);
    destruirMatriz(A);
    destruirMatriz(b);
    destruirMatriz(Ai);
    destruirMatriz(R);
    destruirMatriz(At);
    
    return 0;
}
