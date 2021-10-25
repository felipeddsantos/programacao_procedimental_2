/*

Programação Procedimental II - Vogais, Consoantesm Dígitos e Espaços
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <stdio.h>

int main(){

    int x, vog = 0, cons = 0, spc = 0, dig = 0;
    char frase[300];
    
    printf("Insira uma frase: ");
    fgets(frase, 300, stdin);
    
    for(x = 0; frase[x] != '\0'; x++){
        
        if(frase[x] >= 'a' && frase[x ]<= 'z')
        
            frase[x] = frase[x] - 32;
    }
   
    for(x = 0; frase[x] != '\0'; x++){
   
        if(frase[x] >= 'A' && frase[x] <= 'Z'){
   
            if(frase[x] == 'A' || frase[x] == 'E' || frase[x] == 'I' || frase[x] == 'O' || frase[x] == 'U')
   
                vog++;
   
            else
   
                cons++;
        }
 
        if(frase[x] == ' ')
 
            spc++;
 
        if(frase[x] >= '0' && frase[x] <= '9')
 
            dig++;
    }
 
    printf("\nVogais: %i   Consoantes: %i   Espacos: %i   Digitos: %i", vog, cons, spc, dig);
 
    return 0;
}
