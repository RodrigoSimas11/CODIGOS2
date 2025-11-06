#include <iostream> 
#include <iomanip>  

int main() {

    double d1, d2, d3, maiorDistancia;

    std::cout << "Digite as tres distancias:" << std::endl;
    std::cout << "1a distancia: ";
    std::cin >> d1;
    std::cout << "2a distancia: ";
    std::cin >> d2;
    std::cout << "3a distancia: ";
    std::cin >> d3;

    maiorDistancia = d1;

    if (d2 > maiorDistancia) {
        maiorDistancia = d2;
    }

    if (d3 > maiorDistancia) {
        maiorDistancia = d3;
    }

    std::cout << std::fixed << std::setprecision(2);

    std::cout << "MAIOR DISTANCIA = " << maiorDistancia << std::endl;

    return 0; 
}