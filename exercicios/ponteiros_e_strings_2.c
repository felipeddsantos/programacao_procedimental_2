/*

Programação Procedimental II - Ponteiros e Strings II
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <stdio.h>

int main(){

    int vetor[4] = {0}, a;
    char *p;
    p = (char *) & vetor;
    
    printf("Insira quatro valores: ");
    
    for(a = 0; a < 4; a++)
    
        scanf("%i", &vetor[a]);
    
    printf("\n");
    
    for(; p < (((char*) & vetor) + sizeof(vetor)); p++)
    
        printf("%c", *p);
    
    return 0;
}
