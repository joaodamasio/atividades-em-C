#include <stdio.h>
#include <stdlib.h>

struct ALUNO {
    char nome[50];
    float notas[3];
};

float calcularMedia(struct ALUNO aluno) {
    float soma = 0;
    for (int i = 0; i < 3; i++) {
        soma += aluno.notas[i];
    }
    return soma / 3.0;
}

int main() {
    FILE *arquivo;
    struct ALUNO aluno;
    int numAlunos;

    arquivo = fopen("alunos.txt", "w");

    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    printf("Digite o número de alunos a serem registrados: ");
    scanf("%d", &numAlunos);

    for (int i = 0; i < numAlunos; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", aluno.nome);

        printf("Digite as 3 notas do aluno %d:\n", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("Nota %d: ", j + 1);
            scanf("%f", &aluno.notas[j]);
        }

        fprintf(arquivo, "%s %.2f %.2f %.2f\n", aluno.nome, aluno.notas[0], aluno.notas[1], aluno.notas[2]);
    }

    fclose(arquivo);

    arquivo = fopen("alunos.txt", "r");

    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    float mediaGeral = 0;

    printf("\nNomes e médias dos alunos:\n");
    for (int i = 0; i < numAlunos; i++) {
        fscanf(arquivo, "%s %f %f %f", aluno.nome, &aluno.notas[0], &aluno.notas[1], &aluno.notas[2]);

        float media = calcularMedia(aluno);
        printf("Nome: %s, Média: %.2f\n", aluno.nome, media);
        mediaGeral += media;
    }

    mediaGeral /= numAlunos;
    printf("\nMédia Geral de Todos os Alunos: %.2f\n", mediaGeral);

    fclose(arquivo);

    return 0;
}

