#include <stdio.h>
#include <math.h>

double exercicio_01(double temp, char uni){
    double res;

    if(uni == 'c'){
        res = (temp * 9/5) + 32;
    }else if(uni == 'f'){
        res = (temp - 32) * 5/9;
    }else{
        return 1;
    }
    return res;
}
//Problema passando array
double exercicio_02(double ponto_1[2], double ponto_2[2]){
    return sqrt((ponto_2[0]-ponto_1[0])+(ponto_2[1]-ponto_1[1]));
}

int exercicio_03(int num1, int termos, int dif){
    return num1 + (termos - 1) * dif;
}

double exercicio_04(double base, double altura){
    return (base*altura)/2;
}

int exercicio_05(int num1, int num2, int num3){
    if(num1>num2 && num1>num3){
        return num1;
    }else if(num2>num1 && num2 > num3){
        return num2;
    }else{
        return num3;
    }
}

int exercicio_06(int ano){
    if(ano%4==0){
        return 1;
    }else{
        return 0;
    }
}
/*
int exercicio_07(double lado1, double lado2, double lado3){
    if(lado1==lado2 && lado1==lado3){
        return 2;
    }else if(if lado1==lado2 || lado1 == lado3 || lado2 == lado3){
        return 1;
    }else{
        return 0;
    }
}
*/
int exercicio_08(int x, int y){
    if(x>0&&y>0){
        return 1;
    }else if(x<0&&y>0){
        return 2;
    }else if(x<0&&y<0){
        return 3;
    }else{
        return 4;
    }
}

int exercicio_09(int num1, int num2){
    return 0;
}


int main(){

    return 0;
}
