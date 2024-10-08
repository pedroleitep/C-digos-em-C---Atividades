#include <stdio.h>
#include <stdlib.h>

/*
QUEST�O 7:
Fa�a um programa que imprima os L primeiros elementos da s�rie de Fibonacci. Por
exemplo, se o usu�rio digitou o n�mero 40, dever�o ser apresentados os 40 n�meros da
sequ�ncia na tela.
*/

int main() {
    int L, i;
    long long int t1 = 1, t2 = 1, proximoTermo;

    // Entrada de dados
    //printf("Digite o numero de termos da serie de Fibonacci que deseja exibir: ");
    scanf("%d", &L);

    // Verifica se o n�mero de termos � positivo
    if (L <= 0) {
        printf("Por favor, insira um numero inteiro positivo.\n");
        return 1; // Finaliza o programa com c�digo de erro
    }

    // Exibe os primeiros L termos da s�rie de Fibonacci
    //printf("Serie de Fibonacci:\n");

    for (i = 1; i <= L; i++) {
        printf("%lld ", t1);  // Exibe o termo atual

        proximoTermo = t1 + t2; // Calcula o pr�ximo termo
        t1 = t2;  // Atualiza t1 para o pr�ximo termo
        t2 = proximoTermo; // Atualiza t2 para o pr�ximo termo
    }

    return 0;
}
