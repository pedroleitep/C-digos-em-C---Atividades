#include <stdio.h>
#include <stdlib.h>

/*
Quest�o 1:
Fa�a um programa que receba tr�s n�meros e mostre o maior.
Exemplo Entrada
10 20 30
Sa�da Esperada:
30
*/

int main()
{
    //vari�veis
    int N1, N2, N3, maior;

    //Dados
    //printf("Digite tres numeros: \n");
    scanf("%d %d %d", &N1, &N2, &N3);

    //Estrutura condicional
    if(N1>N2 && N1>N3){
        maior = N1;
    }
    else if(N2>N1 && N2>N3){
        maior  = N2;
    }
    else maior = N3;

    //Resultado
    printf("%0.d", maior);

    return 0;
}
