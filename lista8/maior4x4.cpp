#include <iostream>
#include <climits>
using namespace std;

int main() {
    int m[4][4], maior = INT_MIN;
    cout << "Digite 16 inteiros (4x4):" << endl;
    for (int i=0;i<4;i++) for (int j=0;j<4;j++) {
        cin >> m[i][j];
        if (m[i][j] > maior) maior = m[i][j];
    }
    cout << "Maior = " << maior << endl;
    return 0;
}
