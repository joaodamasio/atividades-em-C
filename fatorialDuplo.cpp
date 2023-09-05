#include <iostream>

unsigned long long int fatorialDuplo(int n) {
    if (n <= 0) {
        return 1;
    }

    unsigned long long int resultado = 1;

    for (int i= 1; i <= n; i += 2) {
        resultado *= i;
    }

    return resultado;
}

int main() {
    int n;

    std::cout << "Digite um numero inteiro positivo: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "O fatorial duploo não está definido para número negativos" << std::endl;
    } else {
        unsigned long long int resultado = fatorialDuplo(n);
        std::cout << "O fatorial duplo de " << n << " é " << resultado << std:: endl;
    }

    return 0;
}