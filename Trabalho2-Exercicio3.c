/*EXERCICIO 3
Leia uma matriz 5 x 5 e também um valor inteiro para uma
variável simples. O programa deverá fazer uma busca por esse valor na matriz e, ao
final, escrever a localização (linha e coluna) caso encontre o valor ou uma
mensagem de “não encontrado”.*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int matriz[5][5], valor, i, j, n = 0;
    
    srand(time(NULL));
    
    printf("Gerando uma matriz 5x5...\n");
    
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            matriz[i][j] = rand()%100;
        }
    }
    printf("Insira um valor inteiro para buscar na matriz \n");
    scanf("%d", &valor);
    
    printf("Buscando o valor na matriz...\n");
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if(matriz[i][j] == valor){
                printf("A localização é linha %d e coluna %d \n", i, j);
                n = n + 1;
            }
        }
    }
    if (n == 0){
        printf("Não foi encontrado o número \n");
    }

    return 0;
}
