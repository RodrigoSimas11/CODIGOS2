#include <iostream>
using namespace std;

int main() {
    int a[5], b[5];
    long long escalar = 0;
    cout << "Digite 5 elementos do primeiro vetor:" << endl;
    for (int i = 0; i < 5; i++) cin >> a[i];
    cout << "Digite 5 elementos do segundo vetor:" << endl;
    for (int i = 0; i < 5; i++) cin >> b[i];
    for (int i = 0; i < 5; i++) escalar += (long long)a[i] * b[i];
    cout << "Produto escalar = " << escalar << endl;
    return 0;
}
