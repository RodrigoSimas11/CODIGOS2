#include <iostream>
using namespace std;

int main() {
    int v[10], x;
    bool encontrado = false;
    cout << "Digite 10 numeros:" << endl;
    for (int i = 0; i < 10; i++) cin >> v[i];
    cout << "Digite o numero a ser buscado: ";
    cin >> x;
    for (int i = 0; i < 10; i++) {
        if (v[i] == x) { encontrado = true; break; }
    }
    if (encontrado) cout << x << " encontrado no vetor." << endl;
    else cout << x << " nao encontrado." << endl;
    return 0;
}
