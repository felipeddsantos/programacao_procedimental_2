/*

Programação Procedimental II - Fatorial I
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <stdio.h>

int main(){

    int a, c = 1;

    printf("Insira um valor: ");
    scanf("%i", &a);

    for(int b = 1; b <= a; b++)
      
        c = c * b;
    
    printf("\nResultado: %i",c);
    
    return 0;
}
