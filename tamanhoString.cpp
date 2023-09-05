#include <stdio.h>
#include <string.h>

int calcularTamanhoString(const char *str) {
	return strlen(str);
}

int main() {
	const char *minhaString = "Esta é uma string de exemplo";
	
	int tamanho = calcularTamanhoString(minhaString);
	
	printf("O tamanho da string é: %d\n", tamanho);
	
	return 0;
}
