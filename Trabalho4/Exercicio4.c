/* EXERCICIO 4 Crie uma struct para controlar ações de uma bolsa de
valores com as seguintes informações:
● Nome da companhia;
● Área de atuação da companhia;
● Valor atual da ação (em reais);
● Variação da ação em porcentagem, ou seja, quanto a ação cresceu ou
caiu
desde a abertura da bolsa no dia
*/
#include <stdio.h>
#include<string.h>
struct ControleAcoes{
 char nome_companhia[30];
 char area_atuacao[30];
 float valor_atual;
 float variacao_acao;
};
struct ControleAcoes dados;
int main(){
 strcpy(dados.nome_companhia, "Empresa A");
 strcpy(dados.area_atuacao, "Finanças");
 dados.valor_atual = 123.4;
 dados.variacao_acao = 1.1;

 return 0;
}
