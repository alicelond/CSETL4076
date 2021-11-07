/* EXERCICIO 2
Escreva uma função que leia um vetor de 10 posições e mostre-o. Em
seguida, troque o primeiro elemento pelo o último, o segundo pelo
penúltimo, o terceiro pelo antepenúltimo e, assim, sucessivamente.
Mostre o novo vetor após todas as trocas.*/
#include <stdio.h>
int main(){
 int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, i, *p;

 p = &vetor[0];
 for(i = 0; i < 10; i++){
 printf("%d \n", *p);
 p++;
 }
 for(i = 0; i < 11; i++){
 printf("%d \n", *p);
 p--;
 }

 return 0;
}
