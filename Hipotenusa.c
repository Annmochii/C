/*
Calcular e exibir a hipotenusa (𝐴) de um triângulo retângulo de catetos 𝐵 e 𝐶.
*/

#include <stdio.h>

int main(void) {
  
  //Entrada:
	float A, B, C;
	printf("> Digite o valor da medida dos catetos B e C (em centímetros): \n| "); scanf("%f", &B);
	printf("| "); scanf("%f", &C);
	
	//Processamento:
  A = sqrt( B*B + C*C);
	
	//Saída:
	printf("> O valor da medida da hipotenusa é: %.2f centímetros.\n", A);
	 
  return 0;
}
