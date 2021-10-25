/*

Programação Procedimental II - Números Perfeitos
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <stdio.h>

int main(){

    int a, c = 0;
   
    printf("Insira um numero: ");
    scanf("%i", &a);
   
    for(int b = 2; b <= a; b++)
       
        if(a % b == 0)
       
            c = c + a / b;
    
    if(c == a)
    
        printf("\nPerfeito");
    
    else
    
        printf("\nNao e perfeito");
    
    return 0;
}
