/*

Programação Procedimental II - Números Racionais
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <stdio.h>

int divres(int a, int b, int c, int d, int *vet1){

    vet1[0] = d * a + b * c;
    vet1[1] = vet1[2] = b * d;
    
    return *vet1;
}

int main(){

    int num1, den1, num2, den2, vet[3];
  
    printf("Insira o numerador e o denominador: ");
    scanf("%i%i%i%i", &num1, &den1, &num2, &den2);
  
    divres(num1, den1, num2, den2, vet);
    
    if(vet[2] == 0){
        
        printf("\nERRO");
        
        return 0;
    }
    
    printf("\nResultado: %i/%i", vet[0], vet[1]);
    
    return 0;
}
