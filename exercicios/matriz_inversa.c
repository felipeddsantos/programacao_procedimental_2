/*

Programação Procedimental II - Matriz Inversa
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <stdio.h>
#include "matriz.h"

int main(){
    
    Matriz a, in;
    int j;
    double d;
    
    printf("Insira a ordem da matriz: ");
    scanf("%i", &j);
    
    a = criarMatriz(j, j);
    preencherMatriz(a);
    d = determinante(a);
    
    if(d == 0){
    
        printf("Nao inversivel");
 
        destruirMatriz(a);
 
        return 0;
    }
    
    else
        
        in = inversa(a);
    
    imprimirMatriz(in);
    destruirMatriz(a);
    destruirMatriz(in);
 
    return 0;
}
