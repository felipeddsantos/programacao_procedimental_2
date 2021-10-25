/*

Programação Procedimental II - Ponteiros e Strings I
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int *p;
    char str[16] = {0};

    printf("Insira uma informacao textual: ");
    fgets(str, 16, stdin);

    p = (int *) & str;
    
    for(; p < ((int *) & str) + sizeof(str) - 12; p++)
    
        printf("\nValor decimal: %i   Valor hexadecimal: %x", *p, *p);
    
    return 0;
}
