/*

Programação Procedimental II - Contando as Letras
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <stdio.h>
#include <ctype.h>

int main(){

    char frase[256];
    int a = 0;
    
    printf("Insira uma frase: ");
    fgets(frase, 256, stdin);
    
    for(int b = 0; frase[b] != '\0'; b++){
    
        if(isalpha(frase[b]))
    
            a++;
    }
    
    printf("\nQuantidade de letras: %i", a);
    
    return 0;
}
