#include <stdio.h>

int main(void) {
  
  //Entrada:
	float VE, R;
  printf("> Vamos descobrir o volume da esfera em litros? \n");
	printf("> Digite o raio da esfrera (em m):\n| "); scanf("%f", &R);

	//Processamento:
	#define PI 3.14;
  VE = (4 / 3) * R * R * R;
  VE *= PI;
	VE *= 0.001;
	
	//Saída:
	printf("> O valor do volume da esfera é: \n> %.2f litros.\n", VE);
	 
  return 0;
}
