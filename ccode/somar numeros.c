//Bibliotecas do c
#include <stdio.h>
#include <stdlib.h>

int main(){ //função main

    printf("Programa que soma dois numeros \n");

  int nu1 = 0, nu2 = 0, resultado = 0; //3 variaveis declaradas

  printf("Digite um numero: ");
  scanf("%d", &nu1); //captura o que o usuairo diigtou e armazena na variavel nu1

  printf("Digite outro numero: ");
  scanf("%d", &nu2); //captura o que o usuario digitou e armazena na variavel nu2

  resultado = nu1 + nu2; //soma nu1 + nu2 e armazena na variavel resultado

  printf("O resultado é: %d", resultado);  //imprime a variavel resultado

  printf("Criado por @AstraGB")

}