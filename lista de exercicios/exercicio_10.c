/*Escreva um programa que receba o valor de um dep´osito e o valor da
taxa de juros, calcule e mostre o valor do rendimento e o valor total depois do
rendimento;*/

#include <stdio.h>

int main()
{
    float deposito;
    int juros;

    scanf("%f %d", &deposito, &juros);
    printf("Valor total: %.2f\nValor rendimento: %.2f", deposito + deposito*juros/100, deposito*juros/100);

    return 0;
}
