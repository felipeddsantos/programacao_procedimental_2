/*

Programação Procedimental II - Bloco de Notas III
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <stdio.h>

int main(){

    FILE *arq;
    char texto, novo[1000];

    arq = fopen("meutexto.txt", "a+");
    texto = getc(arq);

    while(texto != EOF){
    
        putchar(texto);
        texto = getc(arq);
    }
    
    fflush(stdin);
    gets(novo);
    fputs(novo, arq);
    close(arq);
    
    return 0;
}
