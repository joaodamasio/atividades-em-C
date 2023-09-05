#include <stdio.h>

int verificarParImpar(int numero) {
    return numero % 2; 
}

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    int resultado = verificarParImpar(numero);

    if (resultado == 0) {
        printf("%d é par.\n", numero);
    } else {
        printf("%d é ímpar.\n", numero);
    }

    return 0;
}

