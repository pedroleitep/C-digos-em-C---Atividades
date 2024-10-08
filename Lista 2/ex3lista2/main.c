#include <stdio.h>
#include <stdlib.h>

/*
QUEST�O 3:
Fa�a um programa que receba dez n�meros e verifique se eles s�o divis�veis por 3 e 9 (ao
mesmo tempo), por 2 e por 5. Caso algum n�mero n�o seja divis�vel por nenhum desses
n�meros mostre a mensagem �N�mero n�o � divis�vel pelos valores�. Apresente tamb�m
ao final a quantidade de n�meros divis�veis por 3 e 9, por 2 e por 5.
*/

int main()
{
    // vari�veis
    float N;
    int div3e9 = 0, div2 = 0, div5 = 0;

    for (int num = 0; num < 10; num++) {
        // Leitura do n�mero
        scanf("%f", &N);

        // Verifica se o n�mero � um inteiro antes de aplicar os testes de divisibilidade
        if ((int)N % 3 == 0 && (int)N % 9 == 0) {
            div3e9++;
        }

        if ((int)N % 2 == 0) {
            div2++;
        }

        if ((int)N % 5 == 0) {
            div5++;
        }

        if (!((int)N % 3 == 0 && (int)N % 9 == 0) && !((int)N % 2 == 0) && !((int)N % 5 == 0)) {
            printf("N�mero n�o � divis�vel pelos valores\n");
        }
    }

    printf("%d N�meros s�o divis�veis por 3 e por 9\n", div3e9);
    printf("%d N�meros s�o divis�veis por 2\n", div2);
    printf("%d N�meros s�o divis�veis por 5\n", div5);

    return 0;
}

