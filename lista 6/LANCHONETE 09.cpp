#include <iostream>
#include <iomanip> 

int main() {

    int codigoProduto, quantidade;
    double precoUnitario, valorTotal;

    std::cout << "Codigo do produto: ";
    std::cin >> codigoProduto;

    std::cout << "Quantidade: ";
    std::cin >> quantidade;

    switch (codigoProduto) {
        case 1:
            precoUnitario = 5.00;
            break; 
        case 2:
            precoUnitario = 3.50;
            break;
        case 3:
            precoUnitario = 4.80;
            break;
        case 4:
            precoUnitario = 8.90;
            break;
        case 5:
            precoUnitario = 7.32;
            break;
        default:
        
            std::cout << "Codigo de produto invalido!" << std::endl;
            return 1; 
    }

    valorTotal = precoUnitario * quantidade;

    std::cout << std::fixed << std::setprecision(2);


    std::cout << "Valor a pagar: R\$ " << valorTotal << std::endl;

    return 0; 
}