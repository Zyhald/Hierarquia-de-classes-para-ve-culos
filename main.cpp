#include "carro.h"
#include "moto.h"
#include <iostream>

using namespace std;

int main() {
    Carro carro;  // Instancia um objeto da classe Carro
    Moto moto;    // Instancia um objeto da classe Carro

    int opcao;

    while (true) {  // Loop para manter o menu até que o usuário escolha sair
        cout << "\nEscolha uma opcao:\n";
        cout << "1 - Mostrar detalhes do Carro\n";
        cout << "2 - Mostrar detalhes da Moto\n";
        cout << "0 - Sair\n";
        cout << "Opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                carro.mostrarDetalhes();
                break;
            case 2:
                moto.mostrarDetalhes();
                break;
            case 0:
                cout << "Saindo...\n";
                return 0;
            default:
                cout << "Opcao invalida.\n";
                break;
        }
    }

    return 0;
}
