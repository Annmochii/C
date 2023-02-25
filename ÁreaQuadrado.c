#include <stdio.h>

int main(void) {
  
  //Entrada:
	float A, L;
	printf("> Digite o valor da medida do lado do quadrado (em centímetros):\n| "); scanf("%f", &L);
	
	//Processamento:
  A = L*L;
	
	//Saída:
	printf("> O valor da área do quadrado é: %.2f centímetros quadrados.\n", A);
	 
  return 0;
}
