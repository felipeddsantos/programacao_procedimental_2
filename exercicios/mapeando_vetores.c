/*

Programação Procedimental II - Mapeamento de Vetores
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int um(double *veta, double *vetb){
    
    double vetc[20];
    int i;

    for(i = 0; i < 16; i++)

        vetc[i] = sqrt(veta[i] + vetb[i]);

    printf("Resultado: ");

    for(i = 0; i < 16; i++)

        printf("%lf ", vetc[i]);
}

int dois(double *veta, double *vetb){
 
    double vetc[20];
    int i;
 
    for(i = 0; i < 16; i++)
 
        vetc[i] = veta[i] + 3 * vetb[i];
 
    printf("Resultado: ");
 
    for(i = 0; i < 16; i++)
 
        printf("%lf ", vetc[i]);
}

int tres(double *veta, double *vetb){

    double vetc[20];
    int i;
    
    for(i = 0; i < 16; i++)
        
        vetc[i] = (vetb[i] * vetb[i]) / veta[i];
    
    printf("Resultado: ");
    
    for(i = 0; i < 16; i++)
    
        printf("%lf ", vetc[i]);
}

int main(){

    double (*ptr)(double, double);
    double A[]= {1.0, 3.0, 5.0, 7.0, 9.0, 11.0, 13.0, 15.0, 17.0, 19.0, 21.0, 23.0, 25.0, 27.0, 29.0, 31.0};
    double B[]= {0.5, 0.25, 0.125, 0.0625, 0.5, 0.25, 0.125, 0.0625, 0.5, 0.25, 0.125, 0.0625, 0.5, 0.25, 0.125, 0.0625};
    int op;

    printf("Insira uma opcao:\n\nsqrt(a+b) (1)\n\na+3b (2)\n\nb^2/a (3)\n\n");
    scanf("%i", &op);
   
    switch(op){
    
    case 1:
    
        ptr = &um;
        um(A, B);
    
        break;
        
    case 2:
    
        ptr = &dois;
        dois(A, B);
    
        break;
        
    case 3:
    
        ptr = &tres;
        tres(A, B);
        
        break;
    }
    
    return 0;
}
