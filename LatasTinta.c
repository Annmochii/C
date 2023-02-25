#include <stdio.h>

int main(void) {
  
  //Entrada:
	float Custo, R, H, A;
	int QLatas;
  printf("> Vamos descobrir quanto iremos gastar para pintar o tanque? \n");
	printf("> Digite o o raio e altura do tanque: \n| "); scanf("%f", &R);
	printf("| "); scanf("%f", &H);

	//Processamento:
	#define PI 3.14;
	A = 2 * R * H;
	A *= PI;
	QLatas = A / 15;
	Custo = QLatas * 50;
	
	//Saída:
	printf("> A quantidade de latas que iremos gastar será de: \n> %i latas.\n", QLatas);
	printf("> O valor que iremos gastar é: \n> R$%.2f\n", Custo);

  return 0;
}
