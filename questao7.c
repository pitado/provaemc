#include <stdio.h>

int main() {
    float a, b;
    int opcao;

    printf("Digite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite o segundo numero: ");
    scanf("%f", &b);

    printf("Escolha uma operacao:\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Digite sua opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Resultado: %g\n", a + b);
            break;
        case 2:
            printf("Resultado: %g\n", a - b);
            break;
        case 3:
            printf("Resultado: %g\n", a * b);
            break;
        case 4:
            if (b != 0) {
                printf("Resultado: %g\n", a / b);
            } else {
                printf("Nao e possivel dividir por zero.\n");
            }
            break;
        default:
            printf("Opcao invalida.\n");
    }

    return 0;
}
