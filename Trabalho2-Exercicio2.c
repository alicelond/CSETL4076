/*EXERCICIO 2 
Leia uma matriz 4 x 4, conte e escreva quantos valores maiores
que 12 ela possui.*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int matriz[4][4], i, j, valor = 0;
    
    srand(time(NULL));
    
    printf("Gerando uma matriz 4x4..\n");
    
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            matriz[i][j] = rand()%30;
            printf("%d \n", matriz[i][j]);
            if(matriz[i][j] > 12){
                valor = valor + 1;
            }
        }
    }
    printf("%d valores são maiores que 12 \n", valor);
    
    return 0;
}
