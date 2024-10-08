#include <stdio.h>
#include <stdlib.h>

/*
Quest�o 9:
Fa�a uma fun��o que l� um n�mero indeterminado de notas de alunos, calcula e retorna a m�dia
das notas dos alunos aprovados (nota maior ou igual a 6). Fa�a um programa que l� o n�mero
de alunos e imprime a m�dia retornada pela fun��o.
Exemplo Entrada
5
6.4
6.0
9.2
3.7
5.9
Sa�da Esperada:
7.2
*/

// Fun��o que calcula a m�dia das notas dos alunos aprovados
float mediaAprovados(int numAlunos) {
    float nota, soma = 0;
    int contAprovados = 0;

    for (int i = 0; i < numAlunos; i++) {
        //printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &nota);

        if (nota >= 6.0) {
            soma += nota;
            contAprovados++;
        }
    }

    if (contAprovados > 0) {
        return soma / contAprovados;
    } else {
        return 0.0;
    }
}

int main() {
    int numAlunos;

    //printf("Digite o numero de alunos: ");
    scanf("%d", &numAlunos);

    float media = mediaAprovados(numAlunos);

    if (media > 0) {
        printf("%.1f\n", media);
    } else {
        printf("Nenhum aluno foi aprovado.\n");
    }

    return 0;
}
