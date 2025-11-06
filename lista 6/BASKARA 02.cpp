#include <iostream> 
#include <cmath>   
#include <iomanip>  

int main() {

    double a, b, c;
    double delta, x1, x2;

    std::cout << "Digite o coeficiente a: ";
    std::cin >> a;
    std::cout << "Digite o coeficiente b: ";
    std::cin >> b;
    std::cout << "Digite o coeficiente c: ";
    std::cin >> c;

    delta = b * b - 4 * a * c;

    if (delta < 0) {

        std::cout << "Esta equacao nao possui raizes reais." << std::endl;
    } else {

        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);

        std::cout << std::fixed << std::setprecision(4);

        std::cout << "X1 = " << x1 << std::endl;
        std::cout << "X2 = " << x2 << std::endl;
    }

    return 0; 
}