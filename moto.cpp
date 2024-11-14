#include "moto.h"
#include <iostream>
#include <cstring>

Moto::Moto() : Veiculo() {
    std::cout << "Digite o tipo de guidão da moto: ";
    std::cin.getline(tipoGuidao, sizeof(tipoGuidao));
}

void Moto::mostrarDetalhes() const {
    Veiculo::mostrarDetalhes();
    std::cout << "Tipo de guidão: " << tipoGuidao << std::endl;
}