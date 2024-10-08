#include <stdio.h>
#include <stdlib.h>

/*
Quest�o 6:
Escreva uma fun��o que recebe por par�metro um valor inteiro e positivo N e retorna o valor de
S, calculado segundo a f�rmula abaixo.
S = 1 +
1
1! +
1
2! +
1
3! + ... +
1
N!
Fa�a um programa que leia N e imprima o valor retornado pela fun��o.
Exemplo Entrada
14
Sa�da Esperada:
2.718282
*/

int fatorial(int valor){
    int fat = 1;

    for(int num = valor; num > 1; num --){
        fat *= num;
    }

    return fat;
}

float calculaS(int N){
    float S = 0;
    for(int den = 0; den <= N; den++){
        S += 1.0/fatorial(den);
    }

    return S;
}

int main()
{
    int denFinal;
    //printf("Digite N: \n");
    scanf("%d", &denFinal);
    printf("%f", calculaS(denFinal));

    return 0;
}
