/*

Programação Procedimental II - Logarítmo de Qualquer Base
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <stdio.h>

int main(){

    int b, n;
  
    printf("Insira um valor e uma base: ");
    scanf("%i%i", &n, &b);
    
    printf("\nResultado: %f", log(n) / log(b));
    
    return 0;
}
