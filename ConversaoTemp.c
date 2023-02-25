#include <stdio.h>

int main(void) {
  // Entrada
	char escala;
	float temp, F, C;
	printf("> CONVERSOR DE TEMPERATURA CELSIUS-FAHRENHEIT\n");
	printf("> Informe a temperatura:\n| ");	scanf("%f", &temp);
	printf("> Qual escala de temperatura você digitou?\n| Escala (C ou F): "); scanf(" %c", &escala);
	
	// Processamento
  if (escala == 'C') {
		F = (9 * temp / 5) + 32;
		// Saída
		printf("> %.2f C = %.2f F", temp, F);
	}
	else if (escala == 'F') {
    C = (5 * (temp - 32)) / 9;
		 // Saída
    printf("> %.2f F = %.2f C", temp, C);
  } 
	else {
    printf("> Escala inválida!");
	}

  return 0;
}
