/*

Programação Procedimental II - Diferenças de Precisão
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <stdio.h>

int main(){

    int num;
    double num1, numa = 0.0;
    float num2, numb = 0.0;

    printf("Insira um valor: ");
    scanf("%i", &num);
    
    num1 = 1.0 / num;
    num2 = 1.0 / num;
    
    for(int b = 0; b < 729; b++){
        
        numa = numa + num1;
        numb = numb + num2;
    }
    
    printf("\nResultado com double: %.15lf", numa);
    printf("\nResultado com float: %.15f", numb);
    
    return 0;
}
