/*

Programa��o Procedimental II - Chat com um Rob�
Felipe Daniel Dias dos Santos - 11711ECP004
Gradua��o em Engenharia de Computa��o - Faculdade de Engenharia El�trica - Universidade Federal de Uberl�ndia

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#define N 256

int fala_computador(){

    int idfala = rand() % 9;

    switch(idfala){
   
    case 0:
   
        printf("Tudo bem?\n");
   
        break;
   
    case 1:
   
        printf("Ok\n");
   
        break;
   
    case 2:
   
        printf("LOL!\n");
   
        break;
   
    case 3:
   
        printf("Que legal\n");
   
        break;
   
    case 4:
   
        printf("Que chato\n");
   
        break;
   
    case 5:
   
        printf("Fale mais sobre isso\n");
   
        break;
   
    case 6:
   
        printf("Sobre o que mais quer falar?\n");
   
        break;
   
    case 7:
   
        printf("Eu nao acho...\n");
   
        break;
   
    case 8:
   
        printf("T� bom, voce venceu\n");
   
        break;
    }
}

int main(){
 
    srand(time(0));
 
    char str[N];
    int i;
 
    printf("Vamos conversar? Sobre o que quer falar?\n");
 
    while(1){
 
        fgets(str, N, stdin);
 
        for(i = 0; i < N; i++) 
        
        	str[i] = toupper(str[i]);
 
        if(strncmp(str,"TCHAU",5) == 0) 
        
        	break;
 
        fala_computador();
    }
    
    printf("Uma pena... Foi bom falar com voce, ate logo!\n");
    
    return 0;
}
