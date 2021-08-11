/* EXERCICIO 1*/
/*Crie um algoritmo em C que leia do teclado um caractere (B, F, T ou V) referente a uma modalidade de esporte
e mostre uma mensagem dizendo se o esporte escolhido p Basquete (B), Futebol (F), Trnis (T) ou V{lei (V). Caso seja
informado um caractere diferente de B, F, T ou V, mostrar a mensagem 'Esporte
inválido'.
*/
#include<stdio.h>
int main(){
    char esporte_escolhido;

    printf("Insira o esporte escolhido \n (B) Basquete, (F) Futebol, (T) Tênis, (V) Vôlei \n");
    scanf("%c", &esporte_escolhido);

    if (esporte_escolhido == 'B' || esporte_escolhido == 'b')
        printf("O esporte escolhido e': basquete");
    else if (esporte_escolhido == 'F' || esporte_escolhido == 'f')
        printf("O esporte escolhido e': futebol");
        else if(esporte_escolhido == 'T'|| esporte_escolhido == 't')
        printf("O esporte escolhido e': tênis");
               else if (esporte_escolhido == 'V' || esporte_escolhido == 'v')
                printf("O esporte escolhido e': volei");
                    else printf("Esporte inválido");

return 0;
}
