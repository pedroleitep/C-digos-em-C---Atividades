#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Vari�veis
    float razao, termo1, termo5;

    //Dados
    //printf("Digite a razao da PA: \n");
    scanf("%f %f", &razao, &termo1);

    //C�lculo da PA
    termo5 = termo1 * pow(razao,4);//F�rmula an = a1 * r^(n-1)

    //Exibir
    printf("%.0f", termo5);


    return 0;
}
