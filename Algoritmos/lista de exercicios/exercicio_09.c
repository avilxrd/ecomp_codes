/*Escreva um programa que receba o sal´ario-base de um funcion´ario, calcule e
mostre o sal´ario a receber, sabendo-se que esse funcion´ario tem gratifica¸c˜ao de
5% sobre o sal´ario base , paga imposto de 27% sobre o sal´ario base e contribui¸c˜ao
previdenci´aria de 10%;*/

#include <stdio.h>

int main()
{
    float salario;

    scanf("%f", &salario);
    printf("Salario a receber: %f", salario + (salario*0.05) - (salario*0.27) - (salario * 0.1));

    return 0;
}
