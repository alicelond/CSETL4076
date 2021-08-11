/* EXERCICIO 3
Faça uma função que receba 3 notas de um aluno e uma letra
como parâmetro. Se a letra for A, a função deve retornar a média aritmética das
notas do aluno, se a letra for P, deve retornar a sua média ponderada (pesos: 5, 3 e
2).*/
#include<stdio.h>
#include<stdlib.h>

void CalculaNota(float nota1, float nota2, float nota3, char parametro){
    float media_ponderada, media_aritmetica;
    
    media_ponderada = (5 * nota1 + 3 * nota2 + 2 * nota3) / 10;
    media_aritmetica = (nota1 + nota2 + nota3) / 3;
    
    if (parametro == 'A' || parametro == 'a'){
        printf("A media artimetica e %f \n", media_ponderada);
    }else if (parametro == 'P' || parametro == 'p'){
        printf("A media ponderada e %f \n", media_ponderada);
    }else printf("Digite um parametro valido \n");
}
int main(){
    float n1, n2, n3;
    char p;
    
    printf("Insira tres notas do aluno \n");
    scanf("%f%f%f", &n1, &n2, &n3);
    
    printf("Escolha a media a ser calculada.\n Digite 'A' para aritmetica ou 'P' para  ponderada \n");
    scanf("%c", &p);
    
    CalculaNota(n1, n2, n3, p);
    
    system("PAUSE");
    
    return 0;
}
