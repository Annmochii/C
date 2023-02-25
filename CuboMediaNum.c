#include <stdio.h>

int main(void) {
  // Entrada
	float num1, num2, num3, media, cubo_media;
  printf("> Digite três números reais: \n");
  printf("| "); scanf("%f", &num1);
	printf("| "); scanf("%f", &num2);
	printf("| "); scanf("%f", &num3);

	// Processamento
	#define PHI 11.5274
	media = (num1 + num2 + num3) / 3.0;
  cubo_media = media * media * media;
  
	if (cubo_media < 10.0 * PHI || cubo_media > 200.0 * PHI) {
        if (cubo_media < 0 ) {
				cubo_media = -cubo_media; 
				}
				else {
				// Saída
        printf("O cubo da média dos números é %.2f.\n", cubo_media);
				}
    } 
		else {
				// Saída
        printf("A média dos números é %.2f.\n", media);
    }

    return 0;
}
