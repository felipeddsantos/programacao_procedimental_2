/*

Programação Procedimental II - Polígonos
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <stdio.h>
#include <stdlib.h>

struct ponto{

    float x;
    float y;
}Ponto;

struct poligono{

    int vert;
    struct ponto colecao[50];
}Poligono;

int entrada(struct poligono *pol, int j){

    printf("\nInsira a quantidade de vertices do poligono %i: ", j + 1);
    scanf("%i", &pol[j].vert);

    for(int i = 0; i < (pol[j].vert); i++){
     
        printf("\nInsira o ponto do vertice %i do poligono %i: ", i + 1, j + 1);
        scanf("%f%f", &pol[j].colecao[i].x, &pol[j].colecao[i].y);
    }
}

float area(struct poligono *pol, int j){

    float s = 0;

    for(int i = 0; i <= (pol[j].vert) - 1; i++)
     
        s = (((pol[j].colecao[i].x) * (pol[j].colecao[i + 1].y)) - ((pol[j].colecao[i + 1].x) * (pol[j].colecao[i].y))) + s;
    
    return (s / 2);
}

int centroideX(struct poligono *pol, int j){
    
    float sx = 0;
    
    for(int i = 0; i <= (pol[j].vert) - 1; i++)
    
        sx = (pol[j].colecao[i].x) + sx;
    
    return (sx / (pol[j].vert));

}

int centroideY(struct poligono *pol, int j){

    float sy = 0;

    for(int i = 0; i <= (pol[j].vert) - 1; i++)

        sy = (pol[j].colecao[i].y) + sy;

    return (sy / (pol[j].vert));

}

int main(){

    int n, i;
    float *are, *cenx, *ceny;
    struct poligono *a;
    
    a = (struct poligono*)calloc(50, sizeof(struct poligono));
    are = (float*)calloc(50, sizeof(float));
    cenx = (float*)calloc(50, sizeof(float));
    ceny = (float*)calloc(50, sizeof(float));
    
    printf("Insira a quatidade de poligonos: ");
    scanf("%i", &n);
    
    for(i = 0; i < n; i++)
 
        entrada(a, i);
 
    for(i = 0; i < n; i++)
 
        are[i] = area(a, i);
 
    for(i = 0; i < n; i++)
 
        cenx[i] = centroideX(a, i);
 
    for(i = 0; i < n; i++)
 
        ceny[i] = centroideY(a, i);
 
    for(i = 0; i < n; i++){
 
        printf("\n\nArea do poligono %i: %f", i + 1, are[i]);
        printf("\n\nCentroide do poligono %i: (%f %f)", i + 1, cenx[i], ceny[i]);
    }
    
    free(a);
    free(are);
    free(cenx);
    free(ceny);
 
    return 0;
}
