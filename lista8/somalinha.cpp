#include <iostream>
using namespace std;

int main() {
    int m[5][5];
    cout << "Digite 25 inteiros (5x5):" << endl;
    for (int i=0;i<5;i++) for (int j=0;j<5;j++) cin >> m[i][j];
    int linha;
    cout << "Numero da linha (0-4): ";
    cin >> linha;
    if (linha < 0 || linha > 4) { cout << "Linha invalida." << endl; return 0; }
    int soma = 0;
    for (int j=0;j<5;j++) soma += m[linha][j];
    cout << "Soma da linha " << linha << " = " << soma << endl;
    return 0;
}
