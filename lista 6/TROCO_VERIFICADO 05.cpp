#include <iostream>
#include <iomanip>  

int main() {
 
    double precoUnitario, dinheiroRecebido;
    int quantidade;
    double valorTotal, troco, valorFaltante;

    std::cout << "Preco unitario do produto: ";
    std::cin >> precoUnitario;

    std::cout << "Quantidade comprada: ";
    std::cin >> quantidade;

    std::cout << "Dinheiro recebido: ";
    std::cin >> dinheiroRecebido;

    valorTotal = precoUnitario * quantidade;

    std::cout << std::fixed << std::setprecision(2);

    if (dinheiroRecebido >= valorTotal) {

        troco = dinheiroRecebido - valorTotal;
        std::cout << "TROCO = " << troco << std::endl;
    } else {

        valorFaltante = valorTotal - dinheiroRecebido;
        std::cout << "DINHEIRO INSUFICIENTE. FALTAM " << valorFaltante << " REAIS" << std::endl;
    }

    return 0; 
}