#include <stdio.h>

int main(void) {
  
  //Entrada:
	float B, H, PC, PP, PJ;
	printf("> Vamos descobrir o perímetro do retângulo?");
	printf("> Digite o valor da medida da base  do retângulo: \n| Base (em centímetros):"); scanf("%f", &B);
	printf("| Altura (em centímetros):"); scanf("%f", &H);	

	//Processamento:
	PC = 2 * B + 2 * H;
	PP = PC / 2.54;
	PJ = PP * 0.03;
	
	//Saída:
	printf("> O valor do perímetro do retângulo é: %.2f centímetros.\n", PC);
	printf("> O valor do perímetro do retângulo é: %.2f polegadas.\n", PP);
	printf("> O valor do perímetro do retângulo é: %.2f jardas.\n", PJ);
	 
  return 0;
}
