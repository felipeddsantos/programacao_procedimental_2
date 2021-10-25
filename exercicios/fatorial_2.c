/*

Programação Procedimental II - Fatorial II
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <stdio.h>

int main(){

    int a;
    double c = 1;
    
    printf("Insira um valor: ");
    scanf("%i", &a);
   
    for(int b = 1; b <= a; b++)
    
        c = c * b;
    
    printf("\nResultado: %lf", c);
    
    return 0;
}
