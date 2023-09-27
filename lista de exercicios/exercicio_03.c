#include <stdio.h>

/*Lista de Exercícios Algoritmos*/

/*Escreva um programa que receba trˆes notas (reais), calcule e mostre a m´edia
aritm´etica entre elas;*/


int main()
{
    float num1, num2, num3;
    
    scanf("%f %f %f", &num1, &num2, &num3);
    printf("Média: %.2f", (num1 + num2 + num3)/3);

    return 0;
}
