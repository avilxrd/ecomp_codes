    #include <stdio.h>
    
    /*Lista de Exercícios Algoritmos*/
    
    /*Escreva um programa que receba duas notas, calcule e mostre a m´edia pon-
derada destas, considerando peso 2 para a primeira nota e peso 3 para a segunda
nota;*/
    
    
    int main()
    {
        float num1, num2, pond;
        scanf("%f %f", &num1, &num2);
        pond = (2*num1 + 3*num2) / 5;
        printf("%.2f", pond);
        
        return 0;
    }
