/*

Programação Procedimental II - Quais São os Mesmos
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <stdio.h>

int iguais(int *veta, int *vetb){

    int i, j = 0, k, vetc[20];

    for(i = 0; i <= 16; i++){

        for(k = 0; k <= 11; k++){

            if(veta[i] == vetb[k]){

                vetc[j] = vetb[k];
                j++;
            }
        }
    }

    printf("Elementos iguais: ");

    for(i = 0; i < j - 1; i++)

        printf("%i ", vetc[i]);

    return 0;
}

int main(){

    int vet1[30]= {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31}, vet2[30]= {1, 2, 3, 4, 5, 6, 8, 10, 12, 7, 29};

    iguais(vet1, vet2);
    
    return 0;
}
