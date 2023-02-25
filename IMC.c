#include <stdio.h>

int main(void) {
  // Entrada
	float massa, altura, imc;
	printf("> Calculadora de IMC!\n");
	printf("> Digite a massa (em kg): \n| "); scanf("%f", &massa);
	printf("> Digite a altura (em metros): \n| "); scanf("%f", &altura);
	
	// Processamento
  imc = massa / (altura * altura);
	if ( imc < 18.5 ) {
		// Saída
		printf("Seu IMC é: %.2f!\n", imc);
		printf("Sua situação configura como magreza!\n");
	}
	else if ( 18.5 <= imc && imc < 25 ) {
		// Saída
		printf("Seu IMC é: %.2f!\n", imc);
		printf("Você está saudável!\n");
	}
	else if ( 25 <= imc && imc < 30 ) {
		// Saída
		printf("Seu IMC é: %.2f!\n", imc);
		printf("Você está com sobrepeso!\n");
	}
	else if ( 30 <= imc && imc < 35 ) {
		// Saída
		printf("Seu IMC é: %.2f!\n", imc);
		printf("Você está com obesidade grau I!\n");
	}
	else if ( 35 <= imc && imc < 40 ) {
		// Saída
		printf("Seu IMC é: %.2f!\n", imc);
		printf("Você está com obesidade severa!\n");
	}
	else {
		// Saída
		printf("Seu IMC é: %.2f!\n", imc);
		printf("Você está com obesidade mórbida!\n");
	}

  return 0;
}
