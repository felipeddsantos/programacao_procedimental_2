/*

Programação Procedimental II - Imprimindo o Menu
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <stdio.h>

int pares(){

    int i;

    printf("\nPares entre 1 e 20: ");

    for(i = 2; i <= 20; i += 2)

        printf("%i ",i);

    return 0;
}

int impares(){

    int i;
    
    printf("\nImpares entre 1 e 20: ");
    
    for(i = 1; i <= 20; i += 2)
    
        printf("%i ",i);
    
    return 0;
}

int main(){

    int op;
    
    printf("Insira uma opcao:\n\nImpares (1)\nPares (2)\n");
    scanf("%i", &op);
    
    if(op == 1)
    
        impares();
    
    else if(op == 2)
    
        pares();
    
    return 0;
}
