/*

Programação Procedimental II - Área do Paralelogramo
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <stdio.h>

int main(){

    float a, b, c;
   
    printf("Insira a base e a altura: ");
    scanf("%f%f", &a, &b);
   
    c = a * b;
   
    printf("\nArea do paralelogramo: %f", c);
   
    return 0;
}
