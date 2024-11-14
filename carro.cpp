#include "carro.h"
#include <iostream>

Carro::Carro() : Veiculo() {
    std::cout << "Digite o número de portas do carro: ";
    std::cin >> numeroPortas;
    std::cin.ignore();  // Limpa o buffer para evitar problemas com getline em seguida
}

void Carro::mostrarDetalhes() const {
    Veiculo::mostrarDetalhes();
    std::cout << "Número de portas: " << numeroPortas << std::endl;
}
