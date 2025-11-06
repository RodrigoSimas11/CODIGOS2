#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Quantos termos de Fibonacci? ";
    if (!(cin >> n)) return 0;
    long long a = 0, b = 1;
    if (n <= 0) return 0;
    if (n >= 1) cout << a << " ";
    if (n >= 2) cout << b << " ";
    for (int i = 3; i <= n; i++) {
        long long tmp = a + b;
        cout << tmp << " ";
        a = b; b = tmp;
    }
    cout << endl;
    return 0;
}
