#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Digite um inteiro nao-negativo: ";
    cin >> n;
    if (n < 0) {
        cout << "Fatorial nao definido para numero negativo." << endl;
        return 0;
    }
    unsigned long long fat = 1;
    for (int i = 2; i <= n; i++) fat *= i;
    cout << n << "! = " << fat << endl;
    return 0;
}
