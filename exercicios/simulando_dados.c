/*

Programação Procedimental II - Simulação de um Dado
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dado(){

    return rand() % 6 + 1;
}

int main(){

    srand(time(0));

    char c;

    printf("Simulador de dado vs. 1.0 - Digite ENTER para rodar o dado ou 'Q' para sair\n");
    
    do{
    
        scanf("%c", &c);
        printf("... %d\n", dado());
    }while(c != 'q' && c != 'Q');
    
    printf("Obrigado pela preferencia!\n");
    
    return 0;
}
