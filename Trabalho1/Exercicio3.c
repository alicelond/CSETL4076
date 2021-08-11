/* EXERCICIO 3*/
/* Dado o algoritmo, indique quais mensagens serão
mostradas*/

#include<stdio.h>
int main(){
    int a,b,c;
    
    a = 6;
    b = 10;
    c = 6;
    
    if (a < b && c!= a)
        printf("Mensagem 1\n");
    else if (a < b || b < c)
            printf("Mensagem 5 \n");
        else if (c != a)
                printf("Mensagem 4 \n");
                    else printf("Mensagem 3 \n");
                    
    printf("Mensagem 1\n");
    
    return 0;
}

/* O programa imprime as seguintes mensagens: 'Mensagem 5' e 'Mensagem 1'*/
