/*

Programação Procedimental II - Soma de Números Complexos
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <stdio.h>
#include <complex.h>

int main (){

    double x1, y1, x2, y2;
    
    printf("Insira a parte real e imaginaria do primeiro numero complexo: ");
    scanf("%lf%lf", &x1, &y1);
    
    printf("Insira a parte real e imaginaria do segundo numero complexo: ");
    scanf("%lf%lf", &x2, &y2);
    
    double complex z1 = (x1 + y1 * I);
    double complex z2 = (x2 + y2 * I);
    
    printf("\nSoma dos numeros complexos: %lf + %lfi", creal(z1 + z2), cimag(z1 + z2));
    
    return 0;
}

