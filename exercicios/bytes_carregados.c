/*

Programação Procedimental II - Bytes de Memória Carregados
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <stdio.h>

int main(){

    int a = 0, vetor[] = {0x0f, 0xff, 0xffff, 0xffffff, 0x80000001, 0xffffffff};
    unsigned char *p;

    p = (unsigned char *) & vetor;

    for(; p < ((unsigned char *) & vetor) + sizeof(vetor); p++){
      
        if(*p != 0x00000000)
      
        	a++;
      
        printf("O endereco %p aponta para %p\n", p, *p);

    }
    
    printf("\nQuantidade de bytes investigados: %i", a);
    
    return 0;
}
