/*

Programação Procedimental II - Quantas Letras
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <stdio.h>

int main(){

    char palavra[256];
    int a;
    
    printf("Insira uma palavra: ");
    scanf("%s", palavra);
    
    for(a = 0; palavra[a] != '\0'; a++);
    
    printf("\nQuantidade de caracteres: %i", a);
    
    return 0;
}
