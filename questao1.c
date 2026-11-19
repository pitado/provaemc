#include <stdio.h>

int main() {
    float a, b;

    printf("Digite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite o segundo numero: ");
    scanf("%f", &b);

    printf("Soma: %g\n", a + b);
    printf("Subtracao: %g\n", a - b);
    printf("Multiplicacao: %g\n", a * b);

    if (b != 0) {
        printf("Divisao: %g\n", a / b);
    } else {
        printf("Nao e possivel dividir por zero.\n");
    }

    return 0;
}
