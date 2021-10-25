/*

Programação Procedimental II - Potência
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <stdio.h>

int main(){

    int a, b, d;
    
    printf("Insira uma base e um expoente: ");
    scanf("%i%i", &a, &b);
    
    for(int c = 1, d = a; c < b; c++)
    
        d = a * d;
    
    printf("\nResultado: %i", d);
    
    return 0;
}
