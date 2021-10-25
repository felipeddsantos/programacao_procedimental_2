/*

Programação Procedimental II - Lei dos Cossenos
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <stdio.h>
#include <math.h>

int main(){

    float a, b, c, alfa;
   
    printf("Insira dois lados de um triangulo e o angulo correpondente (em radianos): ");
    scanf("%f%f%f", &b, &c, &alfa);
   
    a = sqrt(b * b + c * c - 2 * b * c * cos(alfa));
   
    printf("\nDistancia entre os dois pontos: %f", a);
   
    return 0;
}
