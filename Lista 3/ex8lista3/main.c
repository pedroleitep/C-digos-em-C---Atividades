#include <stdio.h>
#include <stdlib.h>

/*
Quest�o 8:
Escreva uma fun��o que recebe por par�metro um valor inteiro e positivo N e retorna o valor de
S, calculado segundo a f�rmula abaixo.
S = 2/4+ 5/5 + 10/6 + 17/7 + 26/8 + ... + (n2 + 1)/(n + 3)
Fa�a um programa que leia N e imprima o valor retornado pela fun��o.
Exemplo Entrada
3
Sa�da Esperada:
3.166667
*/

// Fun��o para calcular o valor de S com base na f�rmula fornecida
float calculaS(int N) {
    float S = 0.0;

    for (int i = 1; i <= N; i++) {
        S += (float)(i * i + 1) / (i + 3);
    }

    return S;
}

int main() {
    int N;

    //printf("Digite um valor inteiro e positivo para N: ");
    scanf("%d", &N);

    if (N > 0) {
        // Chama a fun��o que calcula S e imprime o resultado
        float resultado = calculaS(N);
        printf("%.6f\n", resultado);
    } else {
        printf("Por favor, insira um valor positivo.\n");
    }

    return 0;
}

