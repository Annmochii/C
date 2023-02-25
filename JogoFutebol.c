#include <stdio.h>

int main(void) {
  // Entrada
  int Criancas = 0, Jovens = 0, Adultos = 0, PTotal, Doacao_Adulto = 0.0;
  float Valor_Ingresso, Arrecadacao;
	printf("> Vamos descobrir a arrecadação do jogo?\n");
  printf("> Informe o valor do ingresso:\n | R$"); scanf("%f", &Valor_Ingresso);
  printf("> Informe a quantidade de crianças abaixo de 10 anos:\n | "); scanf("%d", &Criancas);
	printf("> Informe a quantidade de jovens de 11 a 17 anos:\n | "); scanf("%d", &Jovens);
	printf("> Informe a quantidade de adultos acima de 18 anos:\n | "); scanf("%d", &Adultos);
	printf("> Quantos destes adultos doaram 1 kg de alimento?\n | "); scanf("%d", &Doacao_Adulto);

	// Processamento
  PTotal = Criancas + Jovens + Adultos;
	Arrecadacao = (Jovens + Doacao_Adulto) * Valor_Ingresso / 2;
	Arrecadacao += (Adultos - Doacao_Adulto) * Valor_Ingresso;

  // Saída
  printf("> Público Total: %d\n", PTotal);
  printf("> Arrecadação: R$%.2f\n", Arrecadacao);

  return 0;
}
