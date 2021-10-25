/*

Programação Procedimental II - Menor, Cofator, Comatriz e Matriz Adjunta
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <stdio.h>
#include "matriz.h"

int main(){

    Matriz a, ad;
    int j;
    
    printf("Insira a ordem da matriz (matriz quadrada): ");
    scanf("%i", &j);
    
    a = criarMatriz(j, j);
    preencherMatriz(a);
    ad = adjunta(a);   
    
    printf("\nMatriz adjunta: ");
    imprimirMatriz(ad);
    destruirMatriz(a);
    destruirMatriz(ad);
    
    return 0;
}
