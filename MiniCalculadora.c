#include <stdio.h>

int main(void) {
    // Entrada:
    int N1, N2;
    printf("> MINI CALCULADORA \n");
    printf("| Valor N1: "); scanf("%i", &N1);
    printf("| Valor N2: "); scanf("%i", &n2);

    // Processamento:
    int Soma = N1 + N2;
    int Subtracao = N1 - N2;
    int Multiplicacao = N1 * N2;
    float Divisao = 1.0 * N1 / N2; 
    int Divisao_Inteira = N1 / N2;
    int Resto_Divisao = N1 % N2;

    // Saída:
    printf("> Soma: N1 + N2 = %i + %i = %i\n", N1, N2, Soma);
    printf("> Subtração: N1 - N2 = %i - %i = %i\n", N1, N2, Subtracao);
    printf("> Multiplicação: N1 * N2 = %i * %i = %i\n", N1, N2, Multiplicacao);
    printf("> Divisão: N1 / N2 = %i / %i = %.2f\n", N1, N2, Divisao); // Imprime até duas casas decimais
    printf("> Divisão (Quociente): N1 DIV N2 = %i / %i = %i\n", N1, N2, Divisao_Inteira);
    printf("> Resto da divisão: N1 MOD N2 = %i %% %i = %i\n", N1, N2, Resto_Divisao); // Usa %% para imprimir o símbolo de porcentagem

    return 0;
}
