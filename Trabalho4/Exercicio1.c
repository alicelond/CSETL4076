/* EXERCICIO 1
 Faça uma função que crie um arquivo txt chamado ex1.txt e grave
 o texto: “Arquivo 1” no arquivo. Após ter gravado no arquivo, leia
 esse texto para uma variável e mostre o valor da variável na tela.
 OBS: Utilize a função que achar melhor (fscanf, fprintf, fgets ou fputs).
*/
#include <stdio.h>
int main(){
 char leitura[30];
 FILE *arq;

 arq = fopen("ex1.txt", "w");

 fprintf(arq, "Arquivo 1");

 rewind(arq);

 fgets(leitura, 30, arq);
 printf("%c", leitura);

 return 0;
}
