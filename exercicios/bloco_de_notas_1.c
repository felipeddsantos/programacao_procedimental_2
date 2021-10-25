/*

Programação Procedimental II - Bloco de Notas I
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    char *text, j, i;

    printf("Insira o texto (digite enter para encerrar): ");
    text = (char *)calloc(200, sizeof(char));
    fflush(stdin);
    gets(text);

    for(i = 0; text[i] != '\0'; i++);
    
    for(j = 0; j <= i; j++){
    
        if(text[j] >= 'a' && text[j] <= 'z')
    
            text[j] -= 32;
    }
    
    printf("\nTexto armazenado na memoria: %s\n", text);
    
    free(text);
    
    return 0;
}
