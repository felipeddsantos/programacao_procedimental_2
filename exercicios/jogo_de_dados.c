/*

Programação Procedimental II - Jogo de Dados
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <stdio.h>
#include <time.h>

int main(){

    int a, b, c, d, e, result, i = 0;
    char c1;

    srand(time(0));

    printf("Aperte ""ENTER"" para iniciar");
    scanf("%c", &c1);

    do{
    
        a = rand() % 7;
        b = rand() % 7;
        c = rand() % 7;
        d = rand() % 7;
        e = rand() % 7;
        result = a + b + c + d + e;
        
        printf("\nResultado: %i", result);
       
        i++;
    }while(i < 3 && (result < 18 || result > 23));
    
    if(result >= 18 && result <= 23)
    
        printf("\n\nVencedor");
    
    else
    
        printf("\n\nPerdedor");
    
    return 0;
}
