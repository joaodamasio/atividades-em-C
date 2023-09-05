#include <iostream>
#include <string>

bool ehCapicua(int numero) {
    std:: string numeroStr = std:: to_string(numero);
    int tamanho = numeroStr.length();

    for (int i = 0; i < tamanho / 2; i++){
        if (numeroStr[i] != numeroStr[tamanho - 1 - i]){
            return false;
        }
    }
    return true;
}

int main() {
    int numero;

    std::cout << "Digite um número inteiro: ";
    std::cin >> numero;

    if (ehCapicua(numero)){
        std:: cout << numero << "é um número cappicua." << std:: endl;
    } else {
        std:: cout << numero << "não é um númerocapicua." << std::endl;
    }

    return 0;
}