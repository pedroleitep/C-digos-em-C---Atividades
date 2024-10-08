#include <stdio.h>
#include <stdlib.h>

/*
Quest�o 2:
Fazer um programa leia uma seq��ncia de valores inteiros fornecida pelo usu�rio em uma
linha de entrada e conte o n�mero de valores positivos, negativos e zeros.

Adaptar o programa acima para que ele calcule o percentual dos valores positivos,
negativos e zeros em rela��o ao total de valores fornecidos.
*/

int main()
{
    //variaveis
    int valores, positivos = 0, negativos = 0, zeros = 0;
    float  numero, percPos, percNeg, percZeros;

    //dados
    //printf("Digite quantos valores quer: \n");
    scanf("%d", &valores);

    for(int num = 0; num < valores; num++){
        //printf("Digite um numero: \n");
        scanf("%f", &numero);

        if(numero > 0){
            positivos++;
        }
        else if(numero < 0){
            negativos++;
        }
        else if(numero == 0){
            zeros++;
        }
    }

    //c�lculo da porcentagem de pos., neg. e zeros.
    percPos = (positivos / (float)valores) * 100;
    percNeg = (negativos / (float)valores) * 100;
    percZeros = (zeros / (float)valores) * 100;

    //exibir
    printf("%0.f%% POSITIVOS\n", percPos);
    printf("%0.f%% NEGATIVOS\n", percNeg);
    printf("%0.f%% ZEROS", percZeros);

    return 0;
}
