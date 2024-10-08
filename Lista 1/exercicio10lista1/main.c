#include <stdio.h>
#include <stdlib.h>

int main() {
    /*
    Quest�o 10:
    Uma empresa decidiu dar uma gratifica��o de Natal a seus funcion�rios, baseada no n�mero de
    horas extras e no n�mero de horas que o funcion�rio faltou ao trabalho. O valor do pr�mio �
    obtido pela consulta � tabela que se segue, na qual:
    H = n�mero de horas extras � (2/3 * (n�mero de horas falta))
    H (Minutos) Pr�mio (R$)
    >= 2400 500,00
    > 1800 e < 2400 400,00
    >= 1200 e < 1800 300,00
    >= 600 e < 1200 200,00
    < 600 100,00
    Exemplo Entrada
    32
    12

    Sa�da Esperada:
    300.00
    */

    // Vari�veis
    int horasExtras, horasFaltas;
    float H, Min;

    // Dados
    //printf("Horas extras: \n");
    scanf("%d", &horasExtras);

    //printf("Horas faltas: \n");
    scanf("%d", &horasFaltas);

    // C�lculo
    H = horasExtras - (2.0 / 3.0 * horasFaltas);

    Min = H * 60;

    // Exibir
    if (Min >= 2400) {
        printf("500.00");
    }
    else if (Min > 1800 && Min < 2400) {
        printf("400.00");
    }
    else if (Min >= 1200 && Min < 1800) {
        printf("300.00");
    }
    else if (Min >= 600 && Min < 1200) {
        printf("200.00");
    } else {
        printf("100.00");
    }

    return 0;
}
