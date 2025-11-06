#include <iostream>
using namespace std;

int main() {
    int a[5], b[5], c[10];
    cout << "Digite 5 elementos do primeiro vetor:" << endl;
    for (int i = 0; i < 5; i++) cin >> a[i];
    cout << "Digite 5 elementos do segundo vetor:" << endl;
    for (int i = 0; i < 5; i++) cin >> b[i];
    for (int i = 0; i < 5; i++) {
        c[2*i] = a[i];
        c[2*i+1] = b[i];
    }
    cout << "Vetor intercalado:" << endl;
    for (int i = 0; i < 10; i++) cout << c[i] << " ";
    cout << endl;
    return 0;
}
