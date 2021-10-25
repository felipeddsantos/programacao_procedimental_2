/*

Programação Procedimental II - Distância Entre Dois Pontos
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <stdio.h>
#include <math.h>

int main(){

    float x1, x2, y1, y2, d;

    printf("Insira as coordenadas do primeiro ponto: ");
    scanf("%f%f", &x1, &y1);

    printf("Insira as coordenadas do segundo ponto: ");
    scanf("%f%f", &x2, &y2);

    d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    printf("\nDistancia entre os dois pontos: %f", d);

    return 0;
}
