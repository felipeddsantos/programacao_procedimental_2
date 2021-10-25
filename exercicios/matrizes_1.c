/*

Programação Procedimental II - Matrizes
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <stdio.h>
#include <stdlib.h>

void inserir(float *mat){

    scanf("%f", mat);
}

void transposta(float **mat, int linha, int coluna){

    int l, c;
    
    printf("\nMatriz transposta: \n");
    
    for(l = 0; l < coluna; l++){
        
        printf("\n");
        
        for(c = 0; c < linha; c++)
        
            printf("%f ", mat[c][l]);
    }
}

int main(){

    int l, c, n, m;
    float **matriz;
    
    printf("Insira a ordem da matriz: ");
    scanf("%i%i", &n, &m);
    
    matriz = (float *)calloc(n, sizeof(float*));
    
    for(l = 0; l < n; l++){
    
        matriz[l] = calloc(m, sizeof(float));
    
        for(c = 0; c < m; c++){
    
            printf("\nInsira o elemento (%i %i): ", l, c);
    
            inserir(&matriz[l][c]);
        }
    }
    
    transposta(matriz, n, m);
 
    for(l = 0; l < n; l++)
 
        free(matriz[l]);
 
    free(matriz);
 
    return 0;
}
