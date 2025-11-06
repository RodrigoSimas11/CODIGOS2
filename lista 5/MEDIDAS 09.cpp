#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double a, b, c;
    
    cout << "Digite a medida A: ";
    cin >> a;
    cout << "Digite a medida B: ";
    cin >> b;
    cout << "Digite a medida C: ";
    cin >> c;
    
    double area_quadrado = a * a;
    double area_triangulo = (a * b) / 2.0;
    double area_trapezio = ((a + b) * c) / 2.0;
    
    cout << fixed << setprecision(4);
    cout << "AREA DO QUADRADO = " << area_quadrado << endl;
    cout << "AREA DO TRIANGULO = " << area_triangulo << endl;
    cout << "AREA DO TRAPEZIO = " << area_trapezio << endl;
    
    return 0;
}