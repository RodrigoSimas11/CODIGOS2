#include <iostream> 
#include <iomanip> 

int main() {

    char escalaOrigem;
    double temperaturaOrigem, temperaturaConvertida;

    std::cout << "Voce vai digitar a temperatura em qual escala (C/F)? ";
    std::cin >> escalaOrigem;

    std::cout << "Digite a temperatura: ";
    std::cin >> temperaturaOrigem;

    std::cout << std::fixed << std::setprecision(2);

    if (escalaOrigem == 'C' || escalaOrigem == 'c') {
 
        temperaturaConvertida = temperaturaOrigem * 9.0 / 5.0 + 32.0;
        std::cout << "Temperatura equivalente em Fahrenheit: " << temperaturaConvertida << std::endl;
    } else if (escalaOrigem == 'F' || escalaOrigem == 'f') {

        temperaturaConvertida = (temperaturaOrigem - 32.0) * 5.0 / 9.0;
        std::cout << "Temperatura equivalente em Celsius: " << temperaturaConvertida << std::endl;
    } else {

        std::cout << "Escala invalida. Por favor, digite 'C' ou 'F'." << std::endl;
    }

    return 0;