/*

Programação Procedimental II - Cífra de César
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <stdio.h>

int main(){
    
    int x;
    char fra[300];
    
    printf("Insira uma frase ou codigo: ");
    fgets(fra, 300, stdin);
    
    for(x = 0; fra[x] != '\0'; x++){
        
        if((fra[x] >= 'a' && fra[x] <= 'm') || (fra[x] >= 'A' && fra[x] <= 'M'))
  
            fra[x] = fra[x] + 13;
  
        else if((fra[x] >= 'n' && fra[x] <= 'z') || (fra[x] >= 'N' && fra[x] <= 'Z'))
  
            fra[x] = fra[x] - 13;
    }
    
    printf("\nFrase ou codigo resultante: %s", fra);
    
    return 0;
}
