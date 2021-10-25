/*

Programação Procedimental II - Pseudo-Aleatórios
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <stdio.h>
#include <math.h>

int novo(FILE *file){

    int n, i;
    char nome[20];
    float vet[500];

    srand(time(0));
    
    printf("\nInsira o nome do arquivo: ");
    fflush(stdin);
    gets(nome);
    file = fopen(nome, "w");
    
    printf("\nInsira a quantidade de numeros aleatorios: ");
    scanf("%i", &n);
    printf("\n\n");
    
    for(i = 0; i < n; i++)
        
        vet[i] = rand() % 100;
    
    for(i = 0; i < n; i++)
        
        fprintf(file, "%f\n", vet[i]);
    
    fclose(file);
}

int add(FILE *file){

    int n, i;
    char nome[20];
    float vet[500];
    
    srand(time(0));
    
    printf("\nInsira o nome do arquivo existente: ");
    fflush(stdin);
    gets(nome);
    file = fopen(nome, "a");
    
    printf("\nInsira a quantidade de numeros aleatorios: ");
    scanf("%i", &n);
    printf("\n\n");
    
    for(i = 0; i < n; i++)
    
        vet[i] = rand() % 100;
    
    for(i = 0; i < n; i++)
    
        fprintf(file, "%f\n", vet[i]);
    
    fclose(file);
}

int ler(FILE *file){

    int k = 0, i;
    char nome[20];
    float vet[500], maior = 0, menor = 100, s = 0, s1 = 0, dp, m;
   
    printf("\nInsira o nome do arquivo: ");
    fflush(stdin);
    gets(nome);
    file = fopen(nome, "r");
    
    printf("\nNumeros aleatorios gravados no arquivo:\n");
     
    while(fscanf(file, "%f\n", &vet[k]) != EOF){
     
    	printf("\n%f\n", vet[k]);
     
        k++;
    }
     
    for(i = 0; i < k; i++){
     
    	if(vet[i] <= menor)
     
        	menor = vet[i];
     
        if(vet[i] >= maior)
     
        	maior = vet[i];
            s = vet[i] + s;
    }
        
    m = s / k;
        
    for(i = 0; i < k; i++)
        
    	s1 = s1 + ((vet[i] - m) * (vet[i] - m));
       
    dp = sqrt(s1 / (i - 1));
        
    printf("\nMaior valor: %f", maior);
    printf("\n\nMenor valor: %f", menor);
    printf("\n\nMedia: %f", m);
    printf("\n\nDesvio Padrao: %f\n\n", dp);
    
    fclose(file);
}

int main(){
    
    int op;
    FILE *arq;
    
    do{
    
        printf("Insira uma opcao:\n\nNovo arquivo (0)\n\nAcrescentar ao arquivo (1)\n\nLer arquivo (2)\n\nSair (3)\n");
        scanf("%i", &op);
        
        switch(op){
        
        case 0:
        
            novo(arq);
        
            break;
        
        case 1:
        
            add(arq);
        
            break;
        
        case 2:
 
            ler(arq);
 
            break;
        }
    }while(op != 3);
    
    return 0;
}
