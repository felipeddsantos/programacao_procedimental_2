/*

Programação Procedimental II - Arte Abstrata Aleatória
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <stdio.h>
#include <time.h>

int art(int l, int c, char *caracteres){

    char mat[500][500];
    int aux, aux1, al;

    for(aux = 0; aux <= l; aux++){
       
        for(aux1 = 0; aux1 <= c; aux1++){
       
            al = rand() % 38;
            mat[l][c] = caracteres[al];
       
            printf("%c", mat[l][c]);
        }
    }
    
    return 0;
}

int main(){

    int l, c;
    char caracteres[] = ": $ # $ : 4 b . ' :. : $ # $: 4b. ':.";

    srand(time(0));
    
    printf("Insira um numero de linhas e colunas: ");
    scanf("%i%i", &l, &c);
    
    art(l, c, caracteres);
    
    return 0;
}
