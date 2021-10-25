/*

Programação Procedimental II - Raízes Complexas de Função Quadrática
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <stdio.h>
#include <math.h>

int delta(double a,double b,double c){

    double del;

    del = (b * b) - 4 * a * c;
    raizes(del, a, b);

    return 0;
}

int raizes(double del, double a, double b){

    double rai1, rai2, aux;
    
    if(del > 0){
    
        rai1 = (-b + sqrt(del)) / (2 * a);
        rai2 = (-b - sqrt(del)) / (2 * a);
    
        printf("\nA equacao possui duas raizes reais: %lf e %lf", rai1, rai2);
    }
    
    else if(del == 0){
    
        rai1 =- b / (2 * a);
    
        printf("\nA equacao possui uma raiz real: %lf", rai1);
    }
    
    else if(del <0 ){
    
        rai1 = -b / (2 * a);
        aux = (sqrt(-del)) / (2 * a);
        printf("\nA equacao possui duas raizes complexas: %lf+%lfi e %lf%lfi", rai1, aux, rai1, aux);
    }
    
    return 0;
}

int main(){
    
    double a, b, c;
    
    printf("Insira os coeficientes da equacao quadratica: ");
    scanf("%lf%lf%lf", &a, &b, &c);
    
    delta(a, b, c);
    
    return 0;
}
