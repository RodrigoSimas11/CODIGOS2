#include <iostream>

int main() {

    int n1, n2, n3, menor;

    std::cout << "Primeiro valor: ";
    std::cin >> n1;
    std::cout << "Segundo valor: ";
    std::cin >> n2;
    std::cout << "Terceiro valor: ";
    std::cin >> n3;

    menor = n1;

    if (n2 < menor) {
        menor = n2;
    }

    if (n3 < menor) {
        menor = n3;
    }

    std::cout << "MENOR = " << menor << std::endl;

    return 0; 
}