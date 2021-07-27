/*EXERCICIO 4
Faça um programa que permita ao usuário digitar valores inteiros
para uma matriz de 3 x 3. Em seguida, gere um vetor que deverá conter a soma dos
números de cada coluna da matriz e mostre na tela esse vetor*/
#include<stdio.h>
int main(){
    int matriz[3][3], i, j, soma[3] = {0, 0, 0};
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Insira o elemento A[%d][%d] \n", i,j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    for(i = 0; i < 3; i++){
        soma[0] =  soma[0] + matriz[i][0];
        soma[1] =  soma[1] + matriz[i][1];
        soma[2] =  soma[2] + matriz[i][2];
    }
    printf("Imprimindo o vetor de soma das colunas...\n");
    for(i = 0; i < 3; i++){
        printf("%d \t", soma[i]);
    }
    return 0;
}