#include <stdio.h>

int main() {
    int n;
    float S = 0.0; // Vari�vel para armazenar a soma

    // Entrada de dados
    printf("Digite um valor inteiro e positivo para n: ");
    scanf("%d", &n);

    // Verifica se o n�mero � positivo
    if (n <= 0) {
        printf("O valor de n deve ser positivo.\n");
        return 1; // Finaliza o programa com c�digo de erro
    }

    // C�lculo da soma
    for (int i = 1; i <= n; i++) {
        printf("Termo %d: 1/%d = %.2f\n", i, i, 1.0 / i);
        S += 1.0 / i;
    }

    // Exibe o valor final da soma
    printf("\nO valor final de S e: %.2f\n", S);

    return 0;
}

