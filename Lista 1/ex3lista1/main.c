#include <stdio.h>
#include <stdlib.h>

int main() {
    int ano_nascimento, ano_atual = 2024; // Definindo o ano atual como 2024
    char fez_aniversario;
    int idade;

    // Solicita o ano de nascimento da pessoa
    //printf("Digite o ano de nascimento: ");
    scanf("%d", &ano_nascimento);

    // Pergunta se a pessoa j� fez anivers�rio este ano
    //printf("Voc� j� fez anivers�rio este ano? (S/N): ");
    scanf(" %c", &fez_aniversario);

    // Calcula a idade
    idade = ano_atual - ano_nascimento;

    // Ajusta a idade se a pessoa n�o tiver feito anivers�rio ainda
    if (fez_aniversario == 'N' || fez_aniversario == 'n') {
        idade--;
    }

    // Imprime a idade calculada
    printf("%d\n", idade);

    // Verifica se a pessoa pode dirigir
    if (idade >= 18) {
        printf("Pode dirigir\n");
    } else {
        printf("N�o pode dirigir\n");
    }

    return 0;
}
