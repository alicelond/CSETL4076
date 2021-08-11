/* EXERCICIO 3
Faça uma função que receba 3 notas de um aluno e uma letra
como parâmetro. Se a letra for A, a função deve retornar a média aritmética das
notas do aluno, se a letra for P, deve retornar a sua média ponderada (pesos: 5,  e 2).*/
#include<stdio.h>
#include<stdlib.h>

float CalculaNota (char par, float nota1, float nota2, float nota3){
    float media_aritmetica, media_ponderada;
    
    if(par == 'A' || par== 'a'){
        return (nota1 + nota2 + nota3)/3;
    }else if (par == 'P' || par== 'p'){
        return (5*nota1 + 3*nota2 + 2*nota3)/10;
    }
}
int main(){
    float n1, n2, n3, nota_final;
    char parametro;
    
    printf("Escolha a media a ser calculada.\n Digite 'A' para aritmetica ou 'P' para  ponderada \n");
    scanf("%c", &parametro);
    
    printf("Insira tres notas do aluno \n");
    scanf("%f%f%f", &n1, &n2, &n3);

    nota_final = CalculaNota(parametro, n1, n2, n3);
    printf("A nota final e %f \n", nota_final);
    
    system("PAUSE");
    
    return 0;
}
