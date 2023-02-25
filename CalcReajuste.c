#include <stdio.h>

int main(void) {
  // Entrada
	float preco, reajuste = 0.03;
	char opcao;
	printf("> Vamos descobrir o preço final da mercadoria?");
	printf("> Digite o preço bruto da mercadoria:\n| R$"); scanf("%f", &preco);
	printf("> Escolha uma opção de reajuste:\n");
	printf("  (A)créscimo\n  (D)esconto\n  | "); scanf(" %c", &opcao);

	// Processamento
  if (opcao == 'A'){
		preco += preco * reajuste;
		// Saída
		printf("> O preço final será de: R$%.2f\n", preco); 
	}
	else if (opcao == 'D'){
		preco -= preco * reajuste;
		// Saída
		printf("> O preço final será de: R$%.2f\n", preco);
	}
	else {
		printf("> Valor inválido.\n");
	}
  
  return 0;
}
