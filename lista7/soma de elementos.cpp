#include <iostream>
using namespace std;

int main() {
    int v[10], soma = 0;
    cout << "Digite 10 numeros inteiros:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> v[i];
        soma += v[i];
    }
    cout << "Soma = " << soma << endl;
    return 0;
}
