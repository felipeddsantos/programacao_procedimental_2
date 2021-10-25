/*

Programação Procedimental II - Investigando Ponteiros
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <stdio.h>

int main(){

    unsigned int a = 0xfaca8421;
    unsigned char *p;
    p = (unsigned char *) & a;

    for(; p < (unsigned char *) & a + sizeof(a); p++)
    
    printf("\nO endereco %p aponta para %c", p, *p);
    
    return 0;
}
