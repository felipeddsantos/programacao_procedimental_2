/*

Programação Procedimental II - Multiplicação de Complexo por Conjugado
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <stdio.h>
#include <complex.h>

int main(){

    double x, y, con;
    
    printf("Insira a parte real e imaginaria de um numero complexo: ");
    scanf("%lf%lf", &x, &y);
    
    double complex z = (x + y * I);
    
    con = conj(z);
    
    printf("\nNumero complexo multiplicado pelo seu conjugado: %lf + %lfi", creal(z * con), cimag(z * con));
    
    return 0;
}
