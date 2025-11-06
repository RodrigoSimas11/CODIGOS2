#include <iostream> 

int main() {
 
    int n1, n2;

    std::cout << "Digite dois numeros inteiros:" << std::endl;
    std::cout << "Primeiro numero: ";
    std::cin >> n1;
    std::cout << "Segundo numero: ";
    std::cin >> n2;

    if (n1 == 0 && n2 == 0) {
        std::cout << "Ambos os numeros sao zero, o que nao define uma relacao de multiplicidade padrao." << std::endl;
    } else if (n1 == 0) {
        std::cout << "O segundo numero (" << n2 << ") e multiplo do primeiro numero (0)." << std::endl;
        std::cout << "Note: Qualquer numero (exceto 0) nao pode ser um multiplo de 0." << std::endl;
    } else if (n2 == 0) {
        std::cout << "O primeiro numero (" << n1 << ") e multiplo do segundo numero (0)." << std::endl;
        std::cout << "Note: Qualquer numero (exceto 0) nao pode ser um multiplo de 0." << std::endl;
    } else if (n1 % n2 == 0 || n2 % n1 == 0) {
       
        std::cout << "Sao multiplos" << std::endl;
    } else {
       
        std::cout << "Nao sao multiplos" << std::endl;
    }

    return 0; 
}