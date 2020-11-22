//bibliotecas da linguagem c
#include <stdio.h>

//um laço com condição verdadeira, usando Do While e While

int main(){ //função main

    int a = 1;  //variavel a recebe 1


do(a <= 10)  //se a condição for verdadeira entao execute o While
{

    printf("\n %d", a);

    a = a +1;
}
while (a <= 10) //laço, enquanto a for menor ou igual 10 faço a condição a baixo
{

    printf("\n %d", a);  //imprima na tela a variavel a

    a = a +1;  //a cada linha a variavel a recebe +1
}


printf("Criado por @AstraGB")

}