#include "veiculo.h"

Veiculo::Veiculo() {
    std::cout << "Digite o nome do veículo: ";
    std::cin.getline(nome, sizeof(nome));
}

void Veiculo::mostrarDetalhes() const {
    std::cout << "Nome do veículo: " << nome << std::endl;
}
