//bibliotecas da linguagem c
#include <stdio.h>
#include <stdlib.h>

//um algoritmo que mostre o ano que o usuario nasceu com base na sua idade

//função principal
int main(){

int ano = 2020, idade = 0, id = 0;  //variaveis idade e ano declarada

    printf("Digite sua idade: "); //usuario digita sua idade
    scanf("%d", &idade);     //captura a idade e armazna na variavel idade do tipo inteiro

id = ano - idade; //subtrair 2020 por a idade do usuario

printf("O ano que você nasceu é %d", id); //mostrando o ano que o usuairo nasceu que foi armazenado na variavel id

printf("Criado por @AstraGB")


}