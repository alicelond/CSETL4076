/* EXERCICIO 1
Faça uma função que recebe por parâmetro um valor N e calcula e
escreve a tabuada de N (de 1 até N). Mostre a tabuada na forma:
1 x N = N 2 x N = 2N */
#include <stdio.h>
#include<stdlib.h>

void CalculaTabuada(int);

int main (){
    
    int num;
    
    printf("Digite um numero inteiro para calcular tabuada: \n ");
    scanf("%d", &num);
    
    CalculaTabuada(num);
    
    system("PAUSE");
    return 1;
}
void CalculaTabuada(int valor){
    int tabuada[10], i;
    
    for(i = 0; i < 10; i++){
        tabuada[i] = (i+1) * valor;
        printf("%d * %d = %d \t", i+1, valor, tabuada[i]);
    }
    
}
