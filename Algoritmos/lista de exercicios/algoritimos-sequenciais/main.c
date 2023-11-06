#include <stdio.h>

int exercicio_01(){
    int num1;
    scanf("%d", &num1);
    printf("Sucessor: %d\n", num1 + 1);
    printf("Antecessor: %d", num1 - 1);

    return 0;
}

int exercício_02(){
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    printf("Subtração: %d", num1-num2);

    return 0;
}

int exercicio_03(){
    float num1, num2, num3;
    scanf("%f %f %f", &num1, &num2, &num3);
    printf("Média: %.2f\n", (num1 + num2 + num3)/3);

    return 0;
}

int exercicio_04(){
    int num1, num2, num3, num4;
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
    printf("Soma: %d", (num1 + num2 + num3 + num4));

    return 0;
}

int exercicio_05(){
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    printf("Soma:\n %d + %d = %d\n", num1, num2, num1 + num2);
    printf("Diferenca:\n %d - %d = %d\n", num1, num2, num1 - num2);
    printf("Produto:\n %d * %d = %d\n", num1, num2, num1 * num2);

    return 0;
}

int exercicio_06(){
    float num1, num2, pond;
    scanf("%f %f", &num1, &num2);
    pond = (2*num1 + 3*num2) / 5;
    printf("%.2f", pond);

    return 0;
}

int exercicio_07(){
    float salario;
    scanf("%f", &salario);
    salario = salario + salario*0.25;
    printf("Novo Salario: %f", salario);

    return 0;
}

int exercicio_08(){
    int reajuste;
    float salario;
    scanf("%f %d", &salario, &reajuste);
    printf("Salario Inicial: %.2f\nReajuste: %d por cento\nSalario Novo: %.2f", salario, reajuste, salario + salario*reajuste/100);

    return 0;
}


int exercicio_09()
{
    float salario;
    scanf("%f", &salario);
    printf("Salario a receber: %f", salario + (salario*0.05) - (salario*0.27) - (salario * 0.1));

    return 0;
}

int exercicio_10(){
    float deposito;
    int juros;

    scanf("%f %d", &deposito, &juros);
    printf("Valor total: %.2f\nValor rendimento: %.2f", deposito + deposito*juros/100, deposito*juros/100);

    return 0;
}
