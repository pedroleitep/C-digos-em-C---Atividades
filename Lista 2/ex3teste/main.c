#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, div3e9 = 0, div2 = 0, div5 = 0;

    for (int i = 0; i < 10; i++) {
        // Recebe o n�mero do usu�rio
        //printf("Digite um n�mero: ");
        scanf("%d", &num);

        // Verifica divisibilidade por 3 e 9
        if (num % 3 == 0 && num % 9 == 0) {
            div3e9++;
        }

        // Verifica divisibilidade por 2
        if (num % 2 == 0) {
            div2++;
        }

        // Verifica divisibilidade por 5
        if (num % 5 == 0) {
            div5++;
        }

        // Verifica se n�o � divis�vel por nenhum dos valores
        if (!(num % 3 == 0 && num % 9 == 0) && !(num % 2 == 0) && !(num % 5 == 0)) {
            printf("N�mero n�o � divis�vel pelos valores\n");
        }
    }

    // Exibe o resultado
    printf("%d n�meros s�o divis�veis por 3 e 9\n", div3e9);
    printf("%d n�meros s�o divis�veis por 2\n", div2);
    printf("%d n�meros s�o divis�veis por 5\n", div5);

    return 0;
}
