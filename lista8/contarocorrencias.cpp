#include <iostream>
using namespace std;

int main() {
    int m[4][4];
    cout << "Digite 16 inteiros (4x4):" << endl;
    for (int i=0;i<4;i++) for (int j=0;j<4;j++) cin >> m[i][j];
    int x, cont = 0;
    cout << "Numero a contar: ";
    cin >> x;
    for (int i=0;i<4;i++) for (int j=0;j<4;j++) if (m[i][j] == x) cont++;
    cout << x << " aparece " << cont << " vezes." << endl;
    return 0;
}
