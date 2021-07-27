/*EXERCICIO 1*/
/*) Faça um programa que possua um vetor que armazene 8 números
inteiros. O programa deve executar os seguintes passos:
- Atribua os seguintes valores a esse vetor: 2, 0, 7, -3, 11, 22, -10, 33;
- Armazene em uma variável inteira (simples) a soma entre os valores das
posições ímpares do vetor e mostre na tela esta soma (lembrando que o
vetor inicia na posição 0);
- Modifique o vetor na posição 5, atribuindo a esta posição o valor 200.
- Mostre na tela cada valor do vetor.*/
#include<stdio.h>
int main(){
    int vetor[8] = {2, 0, 7, -3, 11, 22, -10, 33}, i, soma = 0;
    printf("Inicializando o vetor de 8 posições...\n");
    printf("Imprimindo o vetor inicializado...\n");
    for(i = 0; i < 8; i++){
        printf("%d \t", vetor[i]);
    }
    
    printf("Fazendo a soma das posições ímpares...\n");
    for(i = 0; i < 8; i++){
        if(i%2 == 0){
            soma = soma + vetor[i];
        }
    }
    printf("A soma das posições ímpares do vetor é %d \n", soma);
    
    printf("Alterando a posição 5 do vetor... \n");
    vetor[5] = 200;
    
    printf("Imprimindo o vetor após alteração...\n");
    for(i = 0; i < 8; i++){
        printf("%d \t", vetor[i]);
    }
    
return 0;
}
