/*

Programação Procedimental II - verificação de Primos
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <stdio.h>

int main(){

    int a, c, aux = 0;
    
    printf("Insira um numero: ");
    scanf("%i", &a);
    
    for(int b = 2; b < a; b++){
        
        if(a % b == 0)
        
            aux++;
    }
    
    if(aux == 1)
    
        printf("\nNao e primo");
    
    else
    
        printf("\nPrimo");
    
    return 0;
}
