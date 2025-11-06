#include <iostream>
using namespace std;

int main() {
    int m[3][3];
    cout << "Digite 9 inteiros (3x3):" << endl;
    for (int i=0;i<3;i++) for (int j=0;j<3;j++) cin >> m[i][j];
    int diagP = 0, diagS = 0;
    for (int i=0;i<3;i++) {
        diagP += m[i][i];
        diagS += m[i][2-i];
    }
    cout << "Diagonal principal = " << diagP << endl;
    cout << "Diagonal secundaria = " << diagS << endl;
    return 0;
}
