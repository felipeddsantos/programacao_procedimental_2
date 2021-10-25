/*

Programação Procedimental II - Internetando
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <stdio.h>

int main(){

    int x;
    char fra[300];
    
    printf("Insira uma frase: ");
    fgets(fra, 300, stdin);
    
    for(x = 0; fra[x] != '\0'; x++)
  
        if(fra[x] >= 'a' && fra[x] <= 'z')
  
            fra[x] = fra[x] - 32;
  
    for(x = 0; fra[x] != '\0'; x++){
       
        if(fra[x] == 'A')
       
            fra[x] = '4';
       
        if(fra[x] == 'E')
       
            fra[x] = '3';
       
        if(fra[x] == 'I')
       
            fra[x] = '1';
       
        if(fra[x] == 'O')
       
            fra[x] = '0';
       
        if(fra[x] == 'S')
       
            fra[x] = '5';
       
        if(fra[x] == 'G')
       
            fra[x] = '9';
    }
    
    printf("\nFrase resultante: %s", fra);
    
    return 0;
}
