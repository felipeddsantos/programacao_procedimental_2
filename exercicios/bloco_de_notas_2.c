/*

Programação Procedimental II - Bloco de Notas II
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <stdio.h>

int main(){

    FILE *arq;
    char texto[1000];

    printf("Insira o texto: ");
    fflush(stdin);
    gets(texto);

    arq = fopen("meutexto.txt", "a");
    
    fputs(texto, arq);
    fprintf(arq, "\n");
    close(arq);
    
    return 0;
}
