#ifndef VEICULO_H
#define VEICULO_H

#include <iostream>
#include <cstring>

class Veiculo {
protected:
    char nome[50];

public:
    Veiculo();  // Construtor padrão que solicita o nome
    virtual void mostrarDetalhes() const;
    virtual ~Veiculo() {}
};

#endif // VEICULO_H
