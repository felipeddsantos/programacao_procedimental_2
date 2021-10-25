/*

Programação Procedimental II - Máximo e Mínimo
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <stdio.h>
#include <time.h>

int main(){

    int x, num, vet[1000], min, max;
   
    srand(time(0));
   
    printf("Insira um valor entre 1 e 1000: ");
    scanf("%i", &num);
   
    for(x = 0; x < num; x++)
    
        vet[x] = rand() % 10;
    
    max = min = vet[0];
    
    for(x = 0; x < num; x++){
    
        if(vet[x] > max)
           
            max = vet[x];
        
        if(vet[x] < min)
           
            min = vet[x];
    }
    
    printf("\nMaximo: %i   Minimo: %i", max, min);
    
    return 0;
}
