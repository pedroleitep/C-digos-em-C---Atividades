#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
Quest�o 7:
Fa�a uma fun��o que recebe um valor inteiro e verifica se o valor � positivo ou negativo. A fun��o
deve retornar um valor l�gico (true ou false). Fa�a um programa que l� N n�meros e para cada
um deles exibe uma mensagem informando se ele � positivo ou n�o, dependendo se foi retornado
verdadeiro ou falso pela fun��o.
Exemplo Entrada
5
13
23
51
0
-4
3
Sa�da Esperada:
SIM
SIM
SIM
NAO
NAO

*/

bool verifica(int V);
//bool verifica2(int V);

int main()
{
    int N, valor;

    //printf("Digite N: \n");
    scanf("%d", &N);

    for(int i = 0; i < N; i++){
        //printf("Digite um valor: \n");
        scanf("%d", &valor);

        if(verifica(valor)){
            printf("SIM\n");
        }else{
            printf("NAO\n");
        }
    }

    return 0;
}

bool verifica(int V){
    return V > 0;
}

/*
bool verifica2(int V){
    if(V > 0){
        return true;
    }else {
        return false;
    }
}
*/
