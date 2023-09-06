#include <stdio.h>
#include <string.h>

struct Pessoa
{
    char nome [50];
    int idade;
    float altura;
};


struct Pessoa criarPessoa(const char nome[], int idade, float altura) {
    struct Pessoa pessoa;

    strncpy(pessoa.nome, nome, sizeof(pessoa.nome));
    pessoa.idade = idade;
    pessoa.altura = altura;

    return pessoa;
    
}

int main() {
    struct Pessoa pessoa1 = criarPessoa("Annes", 65, 1.75);

    printf("Nome: %s\n", pessoa1.nome);
    printf("Idade: %d\n", pessoa1.idade);
    printf("Altura: %.2f\n", pessoa1.altura);

    return 0;
}