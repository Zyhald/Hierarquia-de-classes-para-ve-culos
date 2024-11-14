#ifndef MOTO_H
#define MOTO_H

#include "veiculo.h"

class Moto : public Veiculo {
private:
    char tipoGuidao[30];

public:
    Moto();  // Construtor que solicita os detalhes específicos de Moto
    void mostrarDetalhes() const override;
};

#endif // MOTO_H