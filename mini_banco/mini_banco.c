/*

Programação Procedimental II - Mini Banco
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef
struct eDados{

    char nome[50];
    unsigned int idade;
    char RG[20];
    char CPF[20];
    char usuario[25];
    char senha[25];
    float saldo;
    float saldop;
    float saldon;
    unsigned int inserir;
    unsigned int retirar;
}Dados;

int cadastro(Dados conta, FILE *arq){
    
    int i;
    
    do{
    
        system("cls");
        printf("Insira seus dados: ");
        printf("\n\nNome: ");
        fflush(stdin);
        gets(conta.nome);
       
        printf("\nIdade: ");
        scanf("%u", &conta.idade);
        
        if(conta.idade < 18){
      
            system("cls");
            printf("Cadastro negado (individuo menor de idade)\n\n");
      
            return 0;
        }
        
        printf("\nRG: ");
        scanf("%s", &conta.RG);
        
        printf("\nCPF: ");
        scanf("%s", &conta.CPF);
        
        do{
        
            i = 0;
            
            printf("\nUsuario: ");
            fflush(stdin);
            gets(conta.usuario);
            strcat(conta.usuario, ".bin");
    
            if(fopen(conta.usuario, "rb")){
    
                printf("\nNome de Usuario Ja Existente. Tente Novamente.\n");
    
                i = 1;
            }
            
        }while(i != 0);
        
        printf("\nSenha: ");
        fflush(stdin);
        gets(conta.senha);
        conta.saldo = conta.saldop = conta.saldon = conta.inserir = conta.retirar = 0;
        
        if(arq = fopen(conta.usuario, "wb")){
            
            fwrite(&conta, sizeof(conta), 1, arq);
            system("cls");
            printf("Cadastro realizado com sucesso.\n");
        }
        
        else{
            
            system("cls");
            printf("Impossivel realizar cadastro");
        }
       
        fclose(arq);
       
        printf("\nEfetuar operacao novamente (1)\n\nVoltar ao menu principal (2)\n\n");
        scanf("%i", &i);
    }while(i != 2);
    
    system("cls");
}

int conta(Dados conta, FILE *arq){

    int i;
    char usuario[50];

    do{

        system("cls");

        do{
        
            i = 0;
            
            printf("Insira o usuario: ");
            fflush(stdin);
            gets(usuario);
            strcat(usuario, ".bin");
            
            if(arq = fopen(usuario, "rb"))
         
                break;
         
            else{
      
                system("cls");
                printf("Usuario inexistente. Tente novamente.\n\n");
      
                i = 1;
            }
            
        }while(i != 0);
        
        fread(&conta, sizeof(conta), 1, arq);
        system("cls");
       
        printf("Dados do cliente:");
        printf("\n\nNome: %s", conta.nome);
        printf("\n\nIdade: %i", conta.idade);
        printf("\n\nRG: %s", conta.RG);
        printf("\n\nCPF: %s", conta.CPF);
        fclose(arq);
       
        printf("\n\nEfetuar operacao novamente (1)\n\nVoltar ao menu principal (2)\n\n");
        scanf("%i", &i);
    }while(i != 2);
    
    system("cls");
}

int saldo(Dados conta, FILE *arq){

    int i, k = 3;
    
    system("cls");
    fseek(arq, 148, SEEK_SET);
    fread(&conta.saldo, sizeof(conta.saldo), 1, arq);
    printf("Saldo total: R$%.2f", conta.saldo);
    fclose(arq);

    printf("\n\nEfetuar operacao novamente (1)\n\nVoltar ao menu principal (2)\n\n");
    scanf("%i", &i);
    system("cls");

    return i;
}

int inserir(Dados conta, FILE *arq){

    int i, k = 3;
    float valor;
    
    system("cls");
    fseek(arq, 148, SEEK_SET);
    fread(&conta.saldo, sizeof(conta.saldo), 1, arq);
    fread(&conta.saldop, sizeof(conta.saldop), 1, arq);
    fread(&conta.saldon, sizeof(conta.saldon), 1, arq);
    fread(&conta.inserir, sizeof(conta.inserir), 1, arq);
    fread(&conta.retirar, sizeof(conta.retirar), 1, arq);
    
    do{
    
        printf("Insira o valor a ser depositado: ");
        scanf("%f", &valor);
    
        i = 1;
    
        if(valor <= 0){
    
            printf("\nValor invalido. Tente novamente.\n\n");
    
            i =- 1;
        }
    
    }while(i == -1);
    
    conta.saldo += valor;
    conta.saldop += valor;
    conta.inserir++;
    
    fseek(arq, 148, SEEK_SET);
    fwrite(&conta.saldo, sizeof(conta.saldo), 1, arq);
    fwrite(&conta.saldop, sizeof(conta.saldop), 1, arq);
    fwrite(&conta.saldon, sizeof(conta.saldon), 1, arq);
    fwrite(&conta.inserir, sizeof(conta.inserir), 1, arq);
    fwrite(&conta.retirar, sizeof(conta.retirar), 1, arq);
    fclose(arq);
    system("cls");
    
    printf("Valor depositado com sucesso.");
    printf("\n\nEfetuar operacao novamente (1)\n\nVoltar ao menu principal (2)\n\n");
    scanf("%i", &i);
    system("cls");
    
    return i;
}

int retirar(Dados conta, FILE *arq){

    int i, k = 3;
    float valor;

    system("cls");
    fseek(arq, 148, SEEK_SET);
    fread(&conta.saldo, sizeof(conta.saldo), 1, arq);
    fread(&conta.saldop, sizeof(conta.saldop), 1, arq);
    fread(&conta.saldon, sizeof(conta.saldon), 1, arq);
    fread(&conta.inserir, sizeof(conta.inserir), 1, arq);
    fread(&conta.retirar, sizeof(conta.retirar), 1, arq);

    do{
  
        printf("Insira o valor a ser retirado: ");
        scanf("%f", &valor);
  
        i = 1;
  
        if(valor > conta.saldo){
            
            printf("\nSaldo insuficiente. Tente novamente.\n\n");
            
            i = -1;
        }

    }while(i == -1);
    
    conta.saldo -= valor;
    conta.saldon += valor;
    conta.retirar++;
    
    fseek(arq, 148, SEEK_SET);
    fwrite(&conta.saldo, sizeof(conta.saldo), 1, arq);
    fwrite(&conta.saldop, sizeof(conta.saldop), 1, arq);
    fwrite(&conta.saldon, sizeof(conta.saldon), 1, arq);
    fwrite(&conta.inserir, sizeof(conta.inserir), 1, arq);
    fwrite(&conta.retirar, sizeof(conta.retirar), 1, arq);
    fclose(arq);
    system("cls");
    
    printf("Valor retirado com sucesso.");
    printf("\n\nEfetuar operacao novamente (1)\n\nVoltar ao menu principal (2)\n\n");
    scanf("%i", &i);
    system("cls");
    
    return i;
}

int extrato(Dados conta, FILE *arq){

    int i, k = 3;
    float valor;

    system("cls");
    fseek(arq, 148, SEEK_SET);
    fread(&conta.saldo, sizeof(conta.saldo), 1, arq);
    fread(&conta.saldop, sizeof(conta.saldop), 1, arq);
    fread(&conta.saldon, sizeof(conta.saldon), 1, arq);
    fread(&conta.inserir, sizeof(conta.inserir), 1, arq);
    fread(&conta.retirar, sizeof(conta.retirar), 1, arq);
    printf("Extrato do cliente:");

    if(conta.inserir == 1)
    
        printf("\n\nInseriu R$%.2f em %u vez", conta.saldop, conta.inserir);
    
    else if(conta.inserir == 0)
    
        printf("\n\nNenhum valor inserido.");
    
    else
    
        printf("\n\nInseriu R$%.2f em %u vezes", conta.saldop, conta.inserir);
        
    if(conta.retirar == 1)
    
        printf("\n\nRetirar R$%.2f em %u vez", conta.saldon, conta.retirar);
    
    else if(conta.retirar == 0)
    
        printf("\n\nNenhum valor retirado.");
    
    else
    
        printf("\n\nRetirar R$%.2f em %u vezes", conta.saldon, conta.retirar);
    
    fclose(arq);
    
    printf("\n\nEfetuar operacao novamente (1)\n\nVoltar ao menu principal (2)\n\n");
    scanf("%i", &i);
    system("cls");
    
    return i;

}

int remover(char *usuario, FILE *arq){

    int i;

    system("cls");
    printf("Voce tem certeza que deseja excluir essa conta?\n\nSim (1)\n\nNao (2)\n\n");
    scanf("%i", &i);

    if(i == 1){
    
        fclose(arq);
        remove(usuario);
        system("cls");
        printf("Exclusao realizada com sucesso.");
    }
    
    else{
    
        system("cls");
        printf("Processo de exclusao cancelado.");
        fclose(arq);
    }
    
    printf("\n\nEfetuar operacao novamente (1)\n\nVoltar ao menu principal (2)\n\n");
    scanf("%i", &i);
    system("cls");
    
    return i;
}

int login (Dados conta, FILE *arq, int op){

    system("cls");
    char usuario[50], senha[25];
    int i, j, k;

    do{
  
        do{
  
            i = 0;
            k = 3;
            
            printf("Insira o usuario: ");
            fflush(stdin);
            gets(usuario);
            strcat(usuario, ".bin");
            
            if(arq = fopen(usuario, "r + b"))
        
                break;
        
            else{
        
                system("cls");
                printf("Usuario inexistente. Tente novamente.\n\n");
        
                i = 1;
            }
       
        }while(i != 0);
        
        fseek(arq, 121, SEEK_SET);
        fread(&conta.senha, sizeof(conta.senha), 1, arq);
        
        do{
        
            if(op == 4)
  
               break;
  
            printf("\nInsira a senha: ");
            fflush(stdin);
            gets(senha);
  
            if(strcmp(senha,conta.senha) != 0){
     
                system("cls");
                printf("Senha invalida!\n\nVoce possui %i tentativas\n",k);
     
                if(k == 0){
                
                    system("cls");
                    printf("Acesso negado\n\n");
                
                    return 0;
                }
                
                k--;
            }
            
            else
            
                k =- 1;
        }while(k != -1);
        
        if(op == 7)
        
            j = remover(usuario, arq);
        
        else if(op == 3)
        
            j = saldo(conta, arq);
        
        else if(op == 4)
        
            j = inserir(conta, arq);
        
        else if(op == 5)
        
            j = retirar(conta, arq);
        
        else if(op == 6)
        
            j = extrato(conta, arq);
    }while(j != 2);
}

int main(){

    Dados dados;
    FILE *file;
    int op;

    do{

        printf("Menu principal: \n\nCriar conta (1)\n\nMostrar conta (2)\n\nMostrar saldo (3)\n\nInserir dinheiro (4)\n\nRetirar dinheiro (5)\n\nExtrato (6)\n\nRemover conta (7)\n\nSair (8)\n\n");
        scanf("%i", &op);
        
        switch(op){
        
        case 1:
        
            cadastro(dados, file);
        
            break;
        
        case 2:
        
            conta(dados, file);
        
            break;
        
        case 3:
        
            login(dados, file, op);
        
            break;
        
        case 4:
        
            login(dados, file, op);
        
            break;
        
        case 5:
        
            login(dados, file, op);
        
            break;
        
        case 6:
        
            login(dados, file, op);
        
            break;
        
        case 7:
        
            login(dados, file, op);
        
            break;
        }
        
    }while(op != 8);
 
    return 0;
}
