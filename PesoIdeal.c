#include <stdio.h>

int main(void) {
    float H, Peso_Ideal;
    char Sexo;
		printf("> Vamos descobrir seu peso ideal?")
    printf("Digite a sua altura e seu sexo: \n| Altura (em metros): "); scanf("%f", &H);
    printf("| Sexo (M ou F): "); scanf(" %c", &Sexo);

    if (Sexo == 'M') {
        Peso_Ideal = (72.7 * H) - 58;
        printf("> Seu peso ideal é: %.2f kg\n", Peso_Ideal);
    } else if (Sexo == 'F') {
        Peso_Ideal = (62.1 * H) - 44.7;
        printf("> Seu peso ideal é: %.2f kg\n", Peso_Ideal);
    } else {
        printf("> Sexo inválido.\n");
    }

    return 0;
}
