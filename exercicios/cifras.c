/*

Programação Procedimental II - Cifra ROT13 vs 2.0
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define N 256

int criptografa(char *frase){

    int i = 0;

    while(frase[i]){

        if(isalpha(frase[i])){

            if((frase[i] >= 'A' && frase[i] <= 'M') || (frase[i] >= 'a' && frase[i] <= 'm'))

                printf("%c", frase[i] + 13);

            else

                printf("%c", frase[i] - 13);
        }

        else

            printf("%c", frase[i]);

        i++;
    }
    
    return 0;
}

int descriptografa(char *frase){
 
    criptografa(frase);
 
    return 0;
}

int main(){
 
    char c;
    char frase[N];
 
    do{
 
        printf(">> 1 - Criptografa; 2 - Descriptografa; 3 - Sair: ");
        scanf("%c", &c);
        getchar();
 
        if(c == '1' || c == '2'){
 
            if(c == '1')
 
                printf("\nEntre com a frase para criptografar:\n");
 
            else
 
                printf("\nEntre com a frase para descriptografar:\n");
 
            fgets(frase, N, stdin);
 
            if(c == '1')

                criptografa(frase);

            else

                descriptografa(frase);
        }
    }while(c != '3');
    
    printf("\nObrigado pela preferencia!\n");
    
    return 0;
}
