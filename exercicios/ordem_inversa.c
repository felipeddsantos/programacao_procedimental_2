/*

Programação Procedimental II - Ordem Inversa
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <stdio.h>
#include <stdlib.h>

int inversao(char *palavra){

    if(*palavra){
    
        inversao(palavra + 1);
        
        printf("%c", *palavra);
    }
}

int main(){

    char string[200];

    printf("Insira uma palavra: ");
    fgets(string, 200, stdin);

    inversao(string);

    return 0;
}
