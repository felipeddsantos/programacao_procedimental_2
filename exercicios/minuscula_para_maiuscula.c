/*

Programação Procedimental II - De Minúscula Para Maiúscula
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <stdio.h>
#include <ctype.h>

int main(){

    char frase[256];
    
    printf("Insira uma frase: ");
    fgets(frase, 256, stdin);
   
    for(int b = 0; frase[b] != '\0'; b++)
       
        if(islower(frase[b]))
         
            frase[b] = toupper(frase[b]);
    
    printf("\nFrase convertida (minuscula para maiuscula): %s", frase);
    
    return 0;
}
