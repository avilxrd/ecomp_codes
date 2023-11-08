#include<stdio.h>

/* Recursão de funções
- Função que chama ela mesma (exemplo: fatorial)
 */
int fatorial(int n){
    if(n==1){
        return 1;
    }else{
        return n * fatorial(n-1);
    }
}

void hanoi(chari ori, char aux, char des, int x){
    if(x>0){
        hanoi(ori, dest, aux, x-1);
        printf("%c -> %c\n," ori, des);
        hanoi(aux, ori, des, x-1);
        printf("%c -> %c\n," ori, des);
    }else{
        printf("X=0...");
    }
}

int main(){
    int n;
    scanf('%d', &n);
    hanoi('0', 'X', 'D', n);
}
