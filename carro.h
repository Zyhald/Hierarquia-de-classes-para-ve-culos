#ifndef CARRO_H
#define CARRO_H

#include "veiculo.h"

class Carro : public Veiculo {
private:
    int numeroPortas;

public:
    Carro();  // Construtor que solicita os detalhes específicos de Carro
    void mostrarDetalhes() const override;
};

#endif // CARRO_H