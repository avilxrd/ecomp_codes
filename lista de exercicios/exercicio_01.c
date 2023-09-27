#include <stdio.h>

/*Lista de Exercícios Algoritmos*/

/*Escreva um programa que leia um inteiro e exiba seu sucessor e seu anteces-
sor;*/


int main()
{
    int num1;

    scanf("%d", &num1);
    
    printf("Sucessor: %d\n", num1 + 1);
    printf("Antecessor: %d", num1 - 1);
    

    return 0;
}
