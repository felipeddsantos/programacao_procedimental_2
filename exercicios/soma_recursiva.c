/*

Programação Procedimental II - Soma Recursiva
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <stdio.h>
#include <stdlib.h>

int soma(int *veta, int n){

    int s;

    if(n == 0)

        return 0;

    else{

        s = soma(veta, n - 1);

        if(veta[n - 1] > 0)

            return s = s + veta[n - 1];
    }
}

int main(){

    int a[]= {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31}, soma1, num = 16;

    soma1 = soma(a, num);
    
    printf("Soma: %i", soma1);

    return 0;
}
