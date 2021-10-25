/*

Programação Procedimental II - Endereço e Conteúdo de Memória
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float a, b, c, *p1, *p2, *p3;

    printf("Insira dois numeros reais: ");
    scanf("%f%f", &a, &b);

    c = a + b;
    p1 = &a;
    p2 = &b;
    p3 = &c;
   
    printf("Endereco da variavel %f: 0X%p\n\nEndereco da variavel %f: 0X%p\n\nEndereco da variavel %f: 0X%p", a, p1, b, p2, c, p3);
   
    return 0;
}
