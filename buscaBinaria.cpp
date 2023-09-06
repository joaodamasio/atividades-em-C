#include <iostream>
#include <vector>

template <typename T>
int buscaBinaria(const std::vector<T>& lista, const T& valor) {
    int esquerda = 0;
    int direita = lista.size() - 1;

    while (esquerda <= direita) {
        int meio = esquerda + (direita - esquerda) / 2;

        if (lista[meio] == valor) {
            return meio; 
        } else if (lista[meio] < valor) {
            esquerda = meio + 1;
        } else {
            direita = meio - 1;
        }
    }

    return -1; 
}

int main() {
    std::vector<int> lista = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int valor;

    std::cout << "Digite um valor para buscar na lista: ";
    std::cin >> valor;

    int indice = buscaBinaria(lista, valor);

    if (indice != -1) {
        std::cout << valor << " foi encontrado na posição " << indice << " da lista." << std::endl;
    } else {
        std::cout << valor << " não foi encontrado na lista." << std::endl;
    }

    return 0;
}
