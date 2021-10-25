/*

Programação Procedimental II - Ponteiros como Vetores
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

    int vet[1000], a, b = 0;
    unsigned char *p, num;
    p = (unsigned char *) & vet;
    p = &vet;
    
    srand(time(0));
   
    printf("Insira um valor entre 0 e 255: ");
    scanf("%u", &num);
    
    for(a = 0; a < 1000; a++)
       
        vet[a] = rand() % RAND_MAX;
        
    for(a = 0; p < (((unsigned char*) & vet) + (sizeof(vet))); p++, a++){
    
        if(*p == num){
    
            b++;
    
            printf("\nO endereco 0X%p aponta para %u", p, *p);
        }
    }
    
    printf("\nOs %i bytes sao iguais a %u e estao localizados entre o endereco 0X%p e o endereco 0X%p", b, num, &vet[0], &vet[999]);
    
    return 0;
}
