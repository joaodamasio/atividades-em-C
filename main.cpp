#include <stdio.h>
#include <stdlib.h>

int contarNumerosInteiros(int a, int b) {
	int diferenca = abs(a - b) - 1;
	
	return diferenca;
}

int main() {
	int a, b;
	
	printf("Digite o primeiro n�mero: ");
	scanf("%d", &a);
	
	printf("Digite o segundo n�mero: ");
	scanf("%d", &b);
	
	int resultado = contarNumerosInteiros(a, b);
	
	printf("Existem %d n�meros inteiros entre %d e %d (exclusivamente). \n", resultado, a, b);
	
	return 0;
}
