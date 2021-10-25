/*

Programação Procedimental II - Simples
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <stdio.h>

struct Cadastro{

        int idade;
        char nome[100];
        float altura;
    }i;

int cadastro(FILE *file){

    printf("\nInsira seu nome: ");
    fflush(stdin);
    gets(i.nome);
    
    printf("\nInsira sua idade: ");
    scanf("%i", &i.idade);
    
    printf("\nInsira sua altura (em metros): ");
    scanf("%f", &i.altura);
    
    printf("\n\n");
    file = fopen("info.txt", "w");
    fprintf(file,"%s\n", i.nome);
    fprintf(file,"%i\n", i.idade);
    fprintf(file,"%f\n", i.altura);
    fclose(file);
}

int informacoes(FILE *file){
    
    int i;
    float j;
    char k[50];
    
    file = fopen("info.txt", "r");
    fgets(k, 50, file);
    fscanf(file, "%i", &i);
    fscanf(file, "%f", &j);
    printf("\nInformacoes:\n\nNome: %s\nIdade: %i\n\nAltura: %f\n\n", k, i, j);
    fclose(file);
}

int main(){
    
    int op;
    FILE *arq;
    
    do{
    
        printf("Insira uma opcao:\n\nCadastro (0)\n\nInformacoes do cadastro (1)\n\nSair (2)\n");
        scanf("%i", &op);
    
        switch(op){
    
        case 0:
    
            cadastro(arq);
    
            break;
    
        case 1:
    
            informacoes(arq);
    
            break;
        }
    }while(op != 2);
    
    return 0;
}
