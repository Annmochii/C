#include <stdio.h>

int main(void) {
  // Entrada
	float num1, num2, num3, media;
	printf("> Calculadora de médias.\n");
	printf("> Digite três números: \n"); 
	printf("| "); scanf("%f", &num1); 
	printf("| "); scanf("%f", &num2);
	printf("| "); scanf("%f", &num3);

	// Processamento
  while (num1 == num2 || num1 == num3 || num2 == num3) {
		printf("> Os valores informados devem ser distintos.\n");
		printf("> Digite três números: \n"); 
    printf("| "); scanf("%f", &num1); 
		printf("| "); scanf("%f", &num2);
		printf("| "); scanf("%f", &num3);
  }

	if (num1 > num2 && num1 > num3) {
      media = (num1 + (num2 > num3 ? num2 : num3)) / 2;
  } 
	else if (num2 > num1 && num2 > num3) {
      media = (num2 + (num1 > num3 ? num1 : num3)) / 2;
	} 
	else {
      media = (num3 + (num1 > num2 ? num1 : num2)) / 2;
  }

  // Saída
	 printf("> A média dos dois maiores números é: %.2f\n", media);

  return 0;
}
