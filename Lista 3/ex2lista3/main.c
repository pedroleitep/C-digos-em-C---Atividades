#include <stdio.h>
#include <stdlib.h>

/*
Quest�o 2:
A prefeitura de uma cidade fez uma pesquisa entre os seus habitantes, coletando dados sobre
o sal�rio e n�mero de filhos. Fa�a um procedimento que leia esses dados para um n�mero n�o
determinado de pessoas, calcule e exiba a m�dia de sal�rio da popula��o (a condi��o de parada
deve ser um flag com sal�rio negativo). Fa�a um programa que acione o procedimento.
Exemplo Entrada
3665.00 4
7870.00 8
33599.00 5
2750.00 9
-1 -1
Sa�da Esperada:
11971.00
*/

void dados();

int main()
{
    dados();
    return 0;
}

void dados()
{
    float salario, salarioTotal = 0, mediaSalarial;
    int populacao = 0, filhos;


    do{
        //printf("Salario e numero de filhos (salario negativo encerra): \n");
        scanf("%f %d", &salario, &filhos);

        if(salario > 0){
            populacao++;
            salarioTotal += salario;
        }

     }while(salario > 0);

     if (populacao > 0) {
        printf("%.2f\n", salarioTotal / populacao);
    } else {
        printf("Nenhum dado valido foi inserido.\n");
    }

}
