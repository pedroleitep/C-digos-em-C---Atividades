#include <stdio.h>
#include <stdlib.h>

/*
Quest�o 1:
Fazer um programa leia uma seq��ncia de valores inteiros fornecida pelo usu�rio em uma
linha de entrada e conte o n�mero de valores positivos, negativos e zeros.
*/

int main()
{
    //variaveis
    float valores, numero, positivos = 0, negativos = 0, zeros = 0;

    //dados
    //printf("Digite quantos valores quer: \n");
    scanf("%f", &valores);

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

    //exibir
    printf("%0.f POSITIVOS\n", positivos);
    printf("%0.f NEGATIVOS\n", negativos);
    printf("%.0f ZEROS\n", zeros);

    return 0;
}
