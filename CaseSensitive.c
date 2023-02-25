#include <stdio.h>

int main(void) {
  // Entrada
	char simbolo;
	printf("> Identificador de vogais e consoantes.\n");
  printf("> Digite um símbolo:\n| "); scanf(" %c", &simbolo);

	// Processamento
  if ((simbolo >= 'a' && simbolo <= 'z') || (simbolo >= 'A' && simbolo <= 'Z')) {
    switch (simbolo) {
      case 'a': case 'e': case 'i': case 'o': case 'u':
        // Saída
        printf("> Vogal minúscula.\n");
        break;
      case 'A': case 'E': case 'I': case 'O': case 'U':
        // Saída
        printf("> Vogal maiúscula.\n");
        break;
      default:
        // Saída
        if (simbolo >= 'a' && simbolo <= 'z') {
          printf("> Consoante minúscula.\n");
        } else {
          printf("> Consoante maiúscula.\n");
        }
        break;
    }
  } else {
		// Saída
    printf("> Não é uma letra.\n");
  }

  return 0;
}
