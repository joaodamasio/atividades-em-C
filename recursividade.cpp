#include <stdio.h>

int calcularTamanhoStringRecursiva(const char *str) {
	if (*str == '\0') {
		return 0;
	}
	
	return 1 + calcularTamanhoStringRecursiva(str + 1);
}

int main() {
	const char *minhaString = "Esta � uma string de exemplo";
	
	int tamanho = calcularTamanhoStringRecursiva(minhaString);
	
	printf("O tamanho da string �: %d\n", tamanho);
	
	return 0;
}
