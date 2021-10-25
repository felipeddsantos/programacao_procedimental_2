/*

Programação Procedimental II - Par ou Ímpar
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <stdio.h>
#include <time.h>

int main(){

    int a, b, c;
    
    srand(time(0));
    
    printf("Insira um valor: ");
    scanf("%i", &a);
    
    b = rand() % 10;
    c = a + b;
    
    printf("\nNumero sorteado: %i\nResultado: %i", b, c);
    
    return 0;
}
