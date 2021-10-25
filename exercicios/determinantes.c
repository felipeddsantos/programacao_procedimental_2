/*

Programação Procedimental II - Determinantes de Matrizes
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <stdio.h>
#include "matriz.h"

int main(){

    Matriz a;
    int j;
    double d;

    printf("Insira a ordem da matriz (matriz quadrada): ");
    scanf("%i", &j);
 
    a = criarMatriz(j, j);
    preencherMatriz(a);
    d = determinante(a);
    
    printf("Determinante: %lf", d);
 
    destruirMatriz(a);
 
    return 0;
}
