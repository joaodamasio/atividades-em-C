#include <stdio.h>


struct ALUNO {
    char nome[50];
    float notas[3];
};

float calcularMedia(float notas[]) {
    float soma = 0;
    for (int i = 0; i < 3; i++) {
        soma += notas[i];
    }
    return soma / 3.0;
}

int main() {
    struct ALUNO aluno;

    printf("Digite o nome do aluno: ");
    scanf("%s", aluno.nome);

    for (int i = 0; i < 3; i++) {
        do {
            printf("Digite a nota %d (0 a 10): ", i + 1);
            scanf("%f", &aluno.notas[i]);

            if (aluno.notas[i] < 0 || aluno.notas[i] > 10) {
                printf("Nota fora do intervalo permitido. Tente novamente.\n");
            }
        } while (aluno.notas[i] < 0 || aluno.notas[i] > 10);
    }

    float media = calcularMedia(aluno.notas);

    printf("\nDados do aluno:\n");
    printf("Nome: %s\n", aluno.nome);
    printf("Notas: %.2f, %.2f, %.2f\n", aluno.notas[0], aluno.notas[1], aluno.notas[2]);
    printf("Média das notas: %.2f\n", media);

    return 0;
}

