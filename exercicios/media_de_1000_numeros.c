/*

Programação Procedimental II - Média de 1000 Números
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <stdio.h>
#include <time.h>

int main(){

    int x, num, vet[10000], som = 0;
    float med;
   
    srand(time(0));
   
    printf("Insira um valor maior que zero: ");
    scanf("%i", &num);
   
    for(x = 0; x < 10000; x++){
    
        vet[x] = rand() % (num + 1);
        som = som + vet[x];
    }
    
    med = som / 10000.0;
   
    printf("\nMedia final: %f", med);
   
    return 0;
}
