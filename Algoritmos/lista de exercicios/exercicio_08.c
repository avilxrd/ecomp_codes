/*Escreva um programa que leia o sal´ario mensal atual de um funcion´ario e o
percentual de reajuste. Calcular e escrever o valor do novo sal´ario*/

#include <stdio.h>

int main()
{
    int reajuste;
    float salario;

    scanf("%f %d", &salario, &reajuste);
    printf("Salario Inicial: %.2f\nReajuste: %d por cento\nSalario Novo: %.2f", salario, reajuste, salario + salario*reajuste/100);

    return 0;
}
