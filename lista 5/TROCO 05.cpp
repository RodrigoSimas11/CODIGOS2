#include <iostream>

using namespace std;

int main() {
    double preco_unitario, valor_recebido;
    int quantidade;
    
    cout << "Preco unitario do produto: ";
    cin >> preco_unitario;
    cout << "Quantidade comprada: ";
    cin >> quantidade;
    cout << "Dinheiro recebido: ";
    cin >> valor_recebido;
    
    double troco = valor_recebido - (preco_unitario * quantidade);
    cout << "TROCO = " << troco << endl;
    
    return 0;
}