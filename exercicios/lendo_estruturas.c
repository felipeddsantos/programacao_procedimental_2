/*

Programação Procedimental II - Lendo Estruturas
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
    char nome[20], p;
    int c = 0, i = 0;
    float sx[100], sy[100];
    
    printf("Insira o nome do arquivo que armazena os pontos: ");
    fflush(stdin);
    gets(nome);
    arq = fopen(nome, "rb");
 
    while((fgetc(arq)) != EOF)
 
        i++;
 
    rewind(arq);
    fread(pontos, sizeof(struct Ponto), i / 8, arq);
 
    for(int k = 0; k < i / 8; k++){

        sx[k] = (pontos[k].x) / 2;
        sy[k] = (pontos[k].y) / 2;
 
        printf("\n\nCentroide do ponto %i: (%f,%f)", k + 1, sx[k], sy[k]);
    }
    
    fclose(arq);
 
    return 0;
}
