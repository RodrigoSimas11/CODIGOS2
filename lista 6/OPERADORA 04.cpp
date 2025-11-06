#include <iostream> 
#include <iomanip>  

int main() {
   
    int minutosConsumidos;
    double valorPagar;

   
    std::cout << "Digite a quantidade de minutos consumidos: ";
    std::cin >> minutosConsumidos;

    if (minutosConsumidos <= 100) {

        valorPagar = 50.00;
    } else {

        valorPagar = 50.00 + (minutosConsumidos - 100) * 2.00;
    }

    std::cout << std::fixed << std::setprecision(2);

    std::cout << "Valor a pagar: R\$ " << valorPagar << std::endl;

    return 0; 
}