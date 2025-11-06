#include <iostream> 

int main() {

    double glicose;

    std::cout << "Digite a medida da glicose: ";
    std::cin >> glicose;

    if (glicose <= 100.0) {

        std::cout << "Classificacao: Normal" << std::endl;
    } else if (glicose <= 140.0) {

        std::cout << "Classificacao: Elevado" << std::endl;
    } else {

        std::cout << "Classificacao: Diabetes" << std::endl;
    }

    return 0; 