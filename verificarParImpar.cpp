#include <stdio.h>

int verificarParImpar(int numero) {
    return numero % 2; 
}

int main() {
    int numero;

    printf("Digite um n�mero: ");
    scanf("%d", &numero);

    int resultado = verificarParImpar(numero);

    if (resultado == 0) {
        printf("%d � par.\n", numero);
    } else {
        printf("%d � �mpar.\n", numero);
    }

    return 0;
}

