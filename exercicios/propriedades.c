/*

Programação Procedimental II - Propriedades
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <stdio.h>

int main(){

    int a;

    printf("Insira um valor: ");
    scanf("%i", &a);
    printf("\nNumero:");

    if(a % 2 == 0)
    
        printf("\nPar");
    
    if(a % 3 == 0)
    
        printf("\nMultiplo de 3");
    
    if(a % 2 != 0)
    
        printf("\nImpar");
    
    if(a % 5 == 0)
    
        printf("\nMultiplo de 5");
    
    if(a % 7 == 0)
    
        printf("\nMultiplo de 7");
    
    return 0;
}
