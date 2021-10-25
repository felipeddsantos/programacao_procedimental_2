/*

Programação Procedimental II - Média e Desvio Padrão
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float media(float *vet, int qntd){

    float s = 0;
    
    for(int i = 0; i < qntd; i++)
    
        s += vet[i];
        
    return s / qntd;
}

float despad(float *vet, int qntd, float med){

    float s = 0;
  
    for(int i = 0; i < qntd; i++)
  
        s += (vet[i] - med) * (vet[i] - med);
  
    return sqrt(s / qntd);
}

int main(){

    int n;
    float *vetor, m, dp;
 
    printf("Insira a quantidade de elementos: ");
    scanf("%i", &n);
    
    vetor=(float *)calloc(n, sizeof(float));
    printf("\nInsira todos os elementos: ");
    
    for(int i = 0; i < n; i++)
    
        scanf("%f", &vetor[i]);
    
    m = media(vetor, n);
    dp = despad(vetor, n, m);
 
    printf("\nMedia: %f\n\nDesvio Padrao: %f\n", m, dp);
 
    free(vetor);
 
    return 0;
}
