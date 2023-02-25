#include <stdio.h>

int main(void) {
  // Entrada
	float valor, conversao1, conversao2;
	char moeda;

	printf("> Conversor de moedas\n");
	printf("> Escolha uma moeda para conversão:\n");
	printf("  A - Dólar\n  B - Reais\n  C - Libras\n");
	printf("  | "); scanf(" %c", &moeda);
  printf("> Digite o valor a ser convertido:\n| "); scanf("%f", &valor);

	// Processamento
	#define DOLAR_REAL 5.19    // 1 Dólar = 5.2 Reais
	#define LIBRA_REAL 6.22   // 1 Libra = 6.22 Reais
	#define LIBRA_DOLAR 1.19  // 1 Libra = 1.19 Dólares
	
	switch (moeda) {
		case 'A': // Dólar para outras moedas
      conversao1 = valor * DOLAR_REAL;
      conversao2 = valor / LIBRA_DOLAR;
      printf("> %.2f Dólares correspondem a:\n", valor);
      printf("> %.2f Reais\n", conversao1);
      printf("> %.2f Libras\n", conversao2);
      break;
		case 'B': // Real para outras moedas
      conversao1 = valor / DOLAR_REAL;
      conversao2 = valor / LIBRA_REAL;
      printf("> %.2f Reais correspondem a:\n", valor);
      printf("> %.2f Dólares\n", conversao1);
      printf("> %.2f Libras\n", conversao2);
      break;
		case 'C': // Libra para outras moedas
      conversao1 = valor * LIBRA_REAL;
      conversao2 = valor * LIBRA_DOLAR;
      printf("> %.2f Libras correspondem a:\n", valor);
      printf("> %.2f Reais\n", conversao1);
      printf("> %.2f Dólares\n", conversao2);
      break;
		default: // Moeda inválida
      printf("Opção inválida! Tente novamente.\n");
      break;
	}

  return 0;
}
