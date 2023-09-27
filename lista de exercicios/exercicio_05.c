    #include <stdio.h>
    
    /*Lista de Exercícios Algoritmos*/
    
    /*screva um programa que leia dois n´umeros inteiros e exibir a soma, a
diferen¸ca e o produto dos mesmos. A sa´ıda deve mostrar os operandos, o oper-
ador e o resultado de cada opera¸c˜ao;*/
    
    
    int main()
    {
        int num1, num2;
        scanf("%d %d", &num1, &num2);
        printf("Soma:\n %d + %d = %d\n", num1, num2, num1 + num2);
        printf("Diferenca:\n %d - %d = %d\n", num1, num2, num1 - num2);
        printf("Produto:\n %d * %d = %d\n", num1, num2, num1 * num2);
        
        return 0;
    }
