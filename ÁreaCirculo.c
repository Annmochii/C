#include <stdio.h>

int main(void) {
  
  //Entrada:
	float R, A, C;
  printf("> Vamos descobrir a área e o comprimento do círculo? \n");
	printf("> Digite o valor do raio do círculo (em centímetros):\n| "); scanf("%f", &R);

	//Processamento:
	#define PI 3.14;
  A = R * R;
  A *= PI;
	C = 2 * R;
  C *= PI;
	
	//Saída:
	printf("> O valor da área do círculo de raio %.2f centímetros é: \n> %.2f centímetros quadrados.\n", R, A);
	printf("> O valor do comprimento do círculo de raio %.2f centímetros é: \n> %.2f centímetros.\n", R, C);
	 
  return 0;
}
