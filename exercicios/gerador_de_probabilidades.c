/*

Programação Procedimental II - Gerador de Probabilidades
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

    int cont = 0;
    float resul, p, ale;

    srand(time(0));

    printf("Insira uma porcentagem: ");
    scanf("%f", &p);

    for(int b = 0; b < 1000; b++){
        
        ale = (rand() % 101) / 100.0;
        
        if(ale < p)
        
            cont++;
    }
    
    printf("\nResultado: %i", cont);
    
    return 0;
}
