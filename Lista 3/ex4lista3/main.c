#include <stdio.h>
#include <stdlib.h>

/*
Quest�o 4:
. Escreva um procedimento que recebe 3 valores reais X, Y e Z e que verifique se esses valores podem
ser os comprimentos dos lados de um tri�ngulo e, neste caso, exibe qual � o tipo de tri�ngulo
formado. Para que X, Y e Z formem um tri�ngulo � necess�rio que a seguinte propriedade seja
satisfeita: o comprimento de cada lado de um tri�ngulo � menor do que a soma do comprimento
dos outros dois lados. O procedimento deve identificar o tipo de tri�ngulo formado observando
as seguintes defini��es:
� Tri�ngulo Equil�tero: os comprimentos dos 3 lados s�o iguais;
� Tri�ngulo Is�sceles: os comprimentos de pelo menos 2 lados s�o iguais.
� Tri�ngulo Escaleno: os comprimentos dos 3 lados s�o diferentes.
Fa�a um programa que leia um n�mero indeterminado (at� lado negativo) de tri�ngulos (valores
dos 3 lados) e para cada tri�ngulo, acione o procedimento.
Exemplo Entrada
51 52 51
37 48 37
91 23 67
8 4 8
80 80 80
-1 -1 -1
Sa�da Esperada:
TRIANGULO ISOSCELES
TRIANGULO ISOSCELES
N�O TRIANGULO
TRIANGULO ISOSCELES
TRIANGULO EQUILATERO
*/

void confereTriangulo(float lado1, float lado2, float lado3);
void tipoTriangulo(float l1, float l2, float l3);

int main()
{
    //variaveis
    float lado1, lado2, lado3;

    do{
        //printf("Digite os 3 lados do triangulo: \n");
        scanf("%f %f %f", &lado1, &lado2, &lado3);

        if(lado1 > 0 && lado2 > 0 && lado3 > 0){
            confereTriangulo(lado1, lado2, lado3);
        }

    }while(lado1 > 0 || lado2 > 0 || lado3 > 0);

    return 0;
}

void confereTriangulo(float lado1, float lado2, float lado3){
    float S12, S13, S23;
    S12 = lado1+lado2;
    S13 = lado1+lado3;
    S23 = lado2+lado3;

    if(lado1 > S23 || lado2 > S13 || lado3 > S12){
        printf("N�O TRIANGULO\n");
    }else{
        tipoTriangulo(lado1, lado2, lado3);
    }

}

void tipoTriangulo(float l1, float l2, float l3){
    if(l1 == l2 && l1 == l3){
        printf("TRIANGULO EQUILATERO\n");
    }

    else if(l1 != l2 && l1 != l3 && l2 != l3){
        printf("TRIANGULO ESCALENO\n");
    }

    else{printf("TRIANGULO ISOSCELES\n");}
}
