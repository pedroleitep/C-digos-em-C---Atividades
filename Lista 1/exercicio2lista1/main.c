#include <stdio.h>
#include <stdlib.h>

/*
Quest�o 2:
Fa�a um programa que receba quatro notas de um aluno, calcule e mostre a m�dia aritm�tica
das notas e a mensagem de aprovado ou reprovado, considerando para aprova��o m�dia 7.
Exemplo Entrada
8 7 5 9
Sa�da Esperada:
7.25
Aprovado
*/

int main()
{
    //Vari�veis
    float N1, N2, N3, N4, media;

    //Dados
    //printf("Digite quatro notas: \n");
    scanf("%f %f %f %f", &N1, &N2, &N3, &N4);

    //Calcular m�dia
    media = (N1 + N2 + N3 + N4) / 4;

    //Resultado
    printf("%.2f\n", media);

    if(media >= 7){
        printf("Aprovado");
    }
    else printf("Reprovado");

    return 0;
}
