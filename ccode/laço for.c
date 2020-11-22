//bibliotecas do c
#include <stdio.h>
#include <stdlib.h>

//Criar um laço simples que não ocupe muito espaço

int main(){  //função main

int i;  //variavel i do tipo inteiro com valor 0

//função For
for(i = 1; i <= 10; i++){ //var i recebe 1, dps até que i seja maior ou igual a 10, faça i receber +1
    
    printf("\n 5 x %d = %d ",i , 5 * i); //imprima na tela uma tabuada do 5
}

system("pause"); //pausar até que o usuario digite 'enter', so funciona quando declara a biblioteca <stdlib.h>

printf("Criado por @AstraGB")

}