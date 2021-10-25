/*

Programação Procedimental II - Escrevendo Estruturas
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <stdio.h>

struct Ponto{
       
        float x;
        float y;
    }pontos[100];

int main(){

    FILE *arq;
    int qnt;
    char nome[20];

    printf("Insira a quantidade de pontos: ");
    scanf("%i", &qnt);
    
    printf("\nInsira o nome do arquivo que armazenara os pontos: ");
    fflush(stdin);
    gets(nome);
    
    arq = fopen(nome, "wb");
    
    for(int k = 0; k < qnt; k++){
       
        printf("\nInsira o ponto %i: ", k + 1);
        scanf("%f%f", &pontos[k].x, &pontos[k].y);
    }
    
    fwrite(pontos, sizeof(struct Ponto), qnt,arq);
    close(arq);
    
    return 0;
}
