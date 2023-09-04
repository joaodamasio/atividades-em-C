#include <stdio.h>

unsigned long long calcularFatorial(int n) {
	if (n < 0){
		printf("Fatorial n�o est� definido para n�meros negativos.\n");
		return 0;
	} else if (n == 0 || n == 1) {
		return 1;
	} else {
		return n * calcularFatorial(n - 1);
	}
}

int main() {
	int numero;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &numero);
	
	unsigned long long resultado = calcularFatorial(numero);
	
	if (resultado != 0) {
		printf("O fatorial de %d � %llu. \n", numero, resultado);
	
	}
	
	return 0;
}
