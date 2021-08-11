/* EXERCICIO 2*/
/* Elabore um algoritmo em C que receba dois numeros inteiros
informados pelo usuário (leitura do teclado) e mostre na tela uma das seguintes
mensagens:
a) O primeiro numero é menor que o segundo
b) O segundo numero é menor que o primeiro
c) Os dois numeros smo iguais*/

#include<stdio.h>
int main(){
    int num1, num2;
    
    printf("Insira dois numeros inteiros \n");
    scanf("%d%d", &num1, &num2);
    
    if(num1 > num2)
        printf("O primeiro numero é maior do que o segundo \n");
    else if (num2 > num1)
            printf("O segundo numero é maior do que o primeiro \n");
            else printf ("Os numeros sao iguais \n");
    
    return 0;
}
