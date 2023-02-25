#include <stdio.h>

int main(void) {
  
  //Entrada:
	float D, x1, x2, y1, y2;
  printf("> Vamos descobrir a distância entre esses dois pontos? \n");
	printf("> Primeiro, digite o x e o y do primeiro ponto: \n| x = "); scanf("%f", &x1);
	printf("| y = "); scanf("%f", &y1);
	printf("> Agora, digite o x e o y do segundo ponto: \n| x = "); scanf("%f", &x2);
	printf("| y = "); scanf("%f", &y2);

	//Processamento:
	D = sqrt( ( (x2 - x1) * (x2 - x1) ) + ( (y2 - y1) * (y2 - y1) ) );
	
	//Saída:
	printf("> A sistância entre os pontos é de: \n> %.2f unidades.\n", D);

  return 0;
}
