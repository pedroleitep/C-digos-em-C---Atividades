#include <stdio.h>
#include <stdlib.h>

/*
Quest�o 1:
Fa�a um procedimento que recebe as 3 notas de um aluno por par�metro e uma letra. Se a letra
for �A�, o procedimento calcula e escreve a m�dia aritm�tica das notas do aluno, se for �P�, calcula
e escreve a sua m�dia ponderada (pesos: 5, 3 e 2). Fa�a um programa que leia 3 notas de N
alunos e acione o procedimento para cada aluno. (N deve ser lido do teclado)
Exemplo Entrada
5
9 5 5 A
8 3 9 A
5 9 0 A
5 2 7 P
5 7 4 P
Sa�da Esperada:
6.33
6.67
4.67
4.50
5.40
*/

void mediaAluno (float nota1, float nota2, float nota3, char tipo);

int main()
{
    //vari�veis
    int N;
    float nota1, nota2, nota3;
    char tipo;

    //quantidade de alunos
    //printf("Digite a quantidade de alunos: \n");
    scanf("%d", &N);

    //repeti��o para ler as notas de cada aluno at� N
    for(int alunos = 0; alunos < N; alunos++){
        //printf("Digite as 3 notas do aluno e a media Aritmetica(A) ou Ponderada(P): \n");
        scanf("%f %f %f %c", &nota1, &nota2, &nota3, &tipo);

        //chamar a fun��o para calcular a m�dia
        mediaAluno(nota1, nota2, nota3, tipo);
    }
    return 0;
}

//fun��o que calcula a m�dia de acordo com o tipo escolhido e imprime na tela
void mediaAluno (float nota1, float nota2, float nota3, char tipo){
    float media;

    //m�dia aritm�tica
    if(tipo == 'A' || tipo == 'a'){
            media = (nota1 + nota2 + nota3) / 3;
        }

        //m�dia ponderada
        else if(tipo == 'P' || tipo == 'p'){
            media = ((nota1 * 5) + (nota2 * 3) + (nota3 * 2)) / 10.0;
        }

        else {
            printf("Tipo de media invalido\n");
            return;
        }

        printf("%.2f\n", media);
}
