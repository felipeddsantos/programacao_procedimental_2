/*

Programação Procedimental II - Bytes de Memória Nulos
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <stdio.h>

int main(){

    int a = 0, vetor[] = {0, 1, 2, 4, 8, 16, 1025};
    unsigned char *p;
    p = (unsigned char *) & vetor;

    for(; p < ((unsigned char *) & vetor) + sizeof(vetor); p++){
       
        if(*p == 0x00 || *p == 00000000)
       
        	a++;
       
        printf("O endereco %p aponta para %i\n", p, *p);
    }
    
    printf("\nQuantidade de bytes investigados: %i", a);
    
    return 0;
}
