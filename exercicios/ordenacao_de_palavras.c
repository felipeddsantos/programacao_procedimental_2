/*

Programação Procedimental II - Ordenação de Palavras
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <stdio.h>
#include <string.h>

int main(){

    char plv[5][40], aux[40];
    int x, y;
    
    printf("Insira cinco palavras: ");
    
    for(x = 0; x < 5; x++)
    
        scanf("%s", plv[x]);
    
    for(x = 1; x < 5; x++){
    
        for(y = 1; y < 5; y++){
    
            if(strcmp(plv[y - 1], plv[y] ) >0){
           
                strcpy(aux, plv[y - 1]);
                strcpy(plv[y - 1], plv[y]);
                strcpy(plv[y], aux);
            }
        }
    }
    
    printf("\nPalavras em ordem alfabetica:");
    
    for(x = 0; x < 5; x++)
        
        printf(" %s", plv[x]);
    
    return 0;
}
