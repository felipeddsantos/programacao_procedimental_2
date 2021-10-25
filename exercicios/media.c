/*

Programação Procedimental II - Média
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <stdio.h>

int main(){

    float a, b, c, d, e, f;

    do{
    
        printf("Insira as cinco notas (de 0.0 ate 10.0): ");
        scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);
    }while(a < 0 || a > 10 || b < 0 || b > 10 || c < 0 || c > 10 || d < 0 || d > 10 || e < 0 || e > 10);
    
    f = (a * 2 + b * 2 + c * 2 + d * 3 + e * 5) / 14;
    
    printf("\nMedia geral: %f", f);
    
    return 0;
}
