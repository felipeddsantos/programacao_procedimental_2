/*

Programação Procedimental II - Frações Irredutíveis
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <stdio.h>
#include <stdlib.h>

int mdc(int x, int y){

    if(x == y || y == 0)
    
        return x;
    
    else if(x == 0)
    
        return y;
    
    else if(x % 2 == 0 && y % 2 != 0)
    
        return mdc(x / 2, y);
    
    else if(y % 2 == 0 && x % 2 != 0)
    
        return mdc(x, y / 2);
    
    else if(y % 2 == 0 && x % 2 == 0)
    
        return 2 * mdc(x / 2, y / 2);
    
    else if(x > y)
    
        return mdc((x - y) / 2, y);
    
    else
    
        return mdc((y - x) / 2, x);
}

int divres(int a, int b, int c, int d, int *vet1){

    vet1[0] = d * a + b * c;
    vet1[1] = vet1[2] = b * d;

    return *vet1;
}

int main(){

    int num1, den1, num2, den2, vet[3];

    printf("Insira o numerador e o denominador: ");
    scanf("%i%i%i%i", &num1, &den1, &num2, &den2);

    divres(num1, den1, num2, den2, vet);

    if(vet[2] == 0){
    
        printf("\nERRO");
    
        return 0;
    }
    
    printf("\nResultado: %i/%i", vet[0] / mdc(vet[0], vet[1]), vet[1] / mdc(vet[0], vet[1]));
 
    return 0;
}
