#include <iostream>
#include <climits>
using namespace std;

int main() {
    int v[15], maior = INT_MIN, menor = INT_MAX;
    cout << "Digite 15 numeros inteiros:" << endl;
    for (int i = 0; i < 15; i++) {
        cin >> v[i];
        if (v[i] > maior) maior = v[i];
        if (v[i] < menor) menor = v[i];
    }
    cout << "Maior = " << maior << "\nMenor = " << menor << endl;
    return 0;
}
