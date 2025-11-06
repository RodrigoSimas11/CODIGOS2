#include <iostream> 
#include <iomanip>  

int main() {

    double nota1, nota2, notaFinal;

    std::cout << "Digite a primeira nota do semestre: ";
    std::cin >> nota1; // Lendo a primeira nota

    std::cout << "Digite a segunda nota do semestre: ";
    std::cin >> nota2; // Lendo a segunda nota
    
    notaFinal = nota1 + nota2;
    
    std::cout << std::fixed << std::setprecision(1);

    std::cout << "NOTA FINAL = " << notaFinal << std::endl;

    if (notaFinal < 60.0) {
        std::cout << "REPROVADO" << std::endl;
    }

    return 0;
}