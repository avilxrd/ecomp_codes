/*
    Aula de algoritmos e programação do dia 25/09/23

    and = &&
    or = ||
    not = !

    if(){
    }else{
    }
    switch =

*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


int main(){
    /*
    int x;

    scanf("%d", &x);

    if(x<10 && x>0){
        printf("Verdadeiro");
    }else{
        printf("Falso");
    }

    float den, div, quo;

    scanf("%f %f", &den, &div);

    if(div != 0){
        quo = den/div;
        printf("%.2f", quo);
    }else{
        printf("O divisor e 0!");
        return -1;
    }*/

    int op;
    printf("Digite um numero: ");
    scanf("%d", &op);

    switch(op) //se um validar, valida todos após
    {
        case 0: printf("amendoin");
            break;
        case 1: printf("coca");
            break;
        case 2: printf("chocolate");
            break;
        case 3: printf("bolacha");
            break;
        case 4: printf("agua");
            break;
    }




    return 0;
}
