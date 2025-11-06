#include <iostream>
using namespace std;

int main() {
    int v[10], inv[10];
    cout << "Digite 10 numeros:" << endl;
    for (int i = 0; i < 10; i++) cin >> v[i];
    for (int i = 0; i < 10; i++) inv[i] = v[9 - i];
    cout << "Vetor invertido:" << endl;
    for (int i = 0; i < 10; i++) cout << inv[i] << " ";
    cout << endl;
    return 0;
}
