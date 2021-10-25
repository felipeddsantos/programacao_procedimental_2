/*

Programação Procedimental II - Quociente e Resto
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <stdio.h>

int divres(int a, int b, int *vet1){

    vet1[0] = a / b;
    vet1[1] = a % b;
    
    return *vet1;
}

int main(){

    int num, den, vet[3];

    printf("Insira o numerador e o denominador: ");
    scanf("%i%i", &num, &den);

    divres(num, den, vet);

    printf("\nResultado: %i,%i", vet[0], vet[1]);
    
    return 0;
}
