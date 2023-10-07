    #include <stdio.h>
    
    /*Lista de Exercícios Algoritmos*/
    
    /*Escreva um programa que receba o sal´ario de um funcion´ario, calcule e mostre
o novo sal´ario, sabendo-se que este sofreu um aumento de 25%;*/
    
    
    int main()
    {
        float salario;
        scanf("%f", &salario);
        salario = salario + salario*0.25;
        printf("Novo Salario: %f", salario);
        
        
        return 0;
    }
