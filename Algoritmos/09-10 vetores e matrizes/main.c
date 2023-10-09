#include <stdio.h>

/*
Anotações da Aula:
Dia 09-10-2023, Vetores e Matrizes

-> Declaração de um Vetor: int v[n], para n o número do "tamanho" do vetor.
-> v[n]: acessando o valor guardado na posição n do vetor
-> Zerar um vetor: laço de repetição
    for(i=0; i<n; i++){
        v[i]=0;
    }
->
*/

int main(){

    int i, v[10], lenght;
    //Declarando as variáveis
    int length = sizeof(v) / sizeof(v[0]);
    printf("%d", lenght);

/*
    //Mostrando o vetor sem zerar
    for(i=0; i<sizeof(v); i++){
        printf("%d: %d\n", i, v[i]);
    }
    //Zerando o vetor
    for(i=0; i<sizeof(v); i++){
        v[i] = 0;
    }

    //Mostrando o vetor depois de zerar
    for(i=0; i<sizeof(v); i++){
        printf("%d: %d\n", i, v[i]);
    }

*/
    return 0;
}
