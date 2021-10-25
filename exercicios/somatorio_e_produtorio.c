/*

Programação Procedimental II - Somatório e Produtório
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <stdio.h>

int main(){

    int x, vet[10], som = 0, pro = 1;
    
    printf("Insira dez valores: ");
    
    for(x = 0; x < 10; x++)
    
        scanf("%i", &vet[x]);
    
    for(x = 0; x < 10; x++){
    
        som = som + vet[x];
        pro = pro * vet[x];
    }
    
    printf("\nSomatorio: %i   Produtorio: %i", som, pro);
    
    return 0;
}
