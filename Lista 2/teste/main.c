#include <stdio.h>
#include <stdlib.h>

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

    // Exibe a f�rmula da soma e calcula o valor de S
    printf("S = ");
    for (int den = 1; den <= n; den++) {
        S += 1.0 / den;

        // Exibir o termo
        if (den == 1) {
            printf("1"); // Primeiro termo sem fra��o
        } else {
            printf(" + 1/%d", den); // Termos subsequentes
        }
    }

    // Exibe o valor final de S
    printf("\nO valor final de S e: %.2f\n", S);

    return 0;
}
