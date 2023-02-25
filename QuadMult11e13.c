#include <stdio.h>

int main(void) {
  // Entrada
	int num, quad;
	printf("> Vamos descobrir se o quadrado de um número é múltiplo de 11 ou 13?\n");
	printf("> Digite um numero positivo:\n| "); scanf("%d", &num);

	// Processamento
	quad = num * num;

  // Saída
	if(quad%11 == 0){
		printf("> O quadrado do número %d é múltiplo de 11", num);
	}
	else if(quad%13 ==0){
		printf("> O quadrado do número %d é múltiplo de 13", num);
	}
	else{
		printf("> O quadrado do número %d não é múltiplo de 11 nem de 13", num);
	}

  return 0;
}
