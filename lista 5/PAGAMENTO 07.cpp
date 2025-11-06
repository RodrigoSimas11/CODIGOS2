#include <iostream>
#include <string>

using namespace std;

int main() {
    string nome;
    double valor_hora;
    int horas_trabalhadas;
    
    cout << "Nome: ";
    cin.ignore();
    getline(cin, nome);
    cout << "Valor por hora: ";
    cin >> valor_hora;
    cout << "Horas trabalhadas: ";
    cin >> horas_trabalhadas;
    
    double pagamento = valor_hora * horas_trabalhadas;
    
    cout << "O pagamento para " << nome << " deve ser " << pagamento << endl;
    
    return 0;
}