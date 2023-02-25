#include <stdio.h>

int main(void) {
  
  //Entrada:
	float A, V, R;
	printf("> Vamos descobrir o volume e a área de uma esfera?");
	printf("> Digite o valor da medida do raio da esfera: \n| Raio (em centímetros):"); scanf("%f", &R);
	
	//Processamento:
	#define PI 3.14;
  A = 4 * R * R;
	A *= PI;
	V = (4 / 3) * R * R;
	V *= PI;
	
	//Saída:
	printf("> O valor da área da esfera é: %.2f centímetros quadrados.\n", A);
	printf("> O valor do volume da esfera é: %.2f centímetros cúbicos.\n", V);
	 
  return 0;
}
