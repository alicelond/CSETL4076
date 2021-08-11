/* EXERCICIO 2
Faça uma função em C que receba 2 números inteiros por parâmetro e diga qual
o maior entre os dois*/
#include <stdio.h>
#include<stdlib.h>

void NumeroMaior(int num1, int num2){

    if(num1 > num2){
        printf("%d é maior que %d \n", num1, num2);
    }else if (num2 > num1){
        printf("%d é maior que %d \n", num2, num1);
    }else printf("Os numeros sao iguais \n");
}
int main(){
    int valor1, valor2;
    
    printf("Digite dois numeros inteiros para comparacao \n");
    scanf("%d%d", &valor1, &valor2);
    
    NumeroMaior(valor1, valor2);
    
    system("PAUSE");
    
    return 0;
}
