#include <stdio.h>

int main(void) {
  
  //Entrada:
	float DistAuto, VTanque, L, H;
  printf("> Vamos descobrir a distância máxima de autonomia que o carro possui? \n");
	printf("> Digite a medida do lado e da altura do tanque: \n| Lado (em metros): "); scanf("%f", &L);
	printf("| Altura (em metros): "); scanf("%f", &H);

	//Processamento:
	VTanque = L * L * H; // Em m3
  VTanque *= 1000; // Em L
  DistAuto = VTanque * 10; //Em Km
  
	//Saída:
	printf("> A distância máxima de autonomia que esse carro possui é de: \n> %.2f Km.\n", DistAuto);

  return 0;
}
