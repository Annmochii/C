#include <stdio.h>

int main(void) {
  
  //Entrada:
	float SH, HM, SB, IRenda, INSS, Sindicato, D, SL;
  printf("> Vamos descobrir seu salário bruto e líquido? \n");
	printf("> Digite o quanto você ganha por hora e seu número de horas trabalhadas no mês:\n| R$"); scanf("%f", &SH);
	printf("| "); scanf("%f", &HM);

	//Processamento:
	SB = SH * HM;
	IRenda = SB * 0.11;
	INSS = SB * 0.08;
	Sindicato = SB * 0.05;
	D = IRenda + INSS + Sindicato;
	SL = SB - D;
	
	//Saída:
	printf("> O valor do seu salário bruto é: \n> R$%.2f\n", SB);
	printf("> O valor que você paga ao INSS é: \n> R$%.2f\n", INSS);
	printf("> O valor que você paga ao sindicato é: \n> R$%.2f\n", Sindicato);
	printf("> O valor do seu salário líquido é: \n> R$%.2f\n", SL);

  return 0;
}
