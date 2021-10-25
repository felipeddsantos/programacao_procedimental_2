/*

Programação Procedimental II - Brincando com Strings
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <stdio.h>

int main(){

    int x, cont, cont1 = 0, cont2 = 0;
    char frase[300], vet1[7] = "BOM DIA", vet2[5] = "TCHAU";
   
    printf("Insira uma frase: ");
    fgets(frase, 300, stdin);
    
    for(cont = 0; frase[cont] != '\0'; cont++);
    
    for(x = 0; x < cont; x++){
    
        if(frase[x] >= 'a' && frase[x] <= 'z')
        
            frase[x] = frase[x] - 32;
    }
    
    for(x = 0; x < 7; x++){
    
        if(vet1[x] != frase[x])
    
            cont1 = 1;
    }
    
    for(x = 0; x < 5; x++){
    
        if(vet2[x] != frase[x])
        
            cont2 = 1;
    }
    
    printf("\nQuantidade de caracteres: %i", cont - 1);
 
    if(cont1 == 0)
 
        printf("\n\nBom dia pra voce tambem");
 
    if(cont2 == 0)
 
        printf("\n\nSaindo? Que pena...");
 
    if(cont1 == 1 && cont2 == 1)
 
        printf("\n\nVoce quis dizer: %s", frase);
 
    return 0;
}
