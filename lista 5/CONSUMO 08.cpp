#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double distancia, combustivel;
    
    cout << "Distancia percorrida: ";
    cin >> distancia;
    cout << "Combustivel gasto: ";
    cin >> combustivel;
    
    double consumo_medio = distancia / combustivel;
    
    cout << fixed << setprecision(3);
    cout << "Consumo medio = " << consumo_medio << endl;
    
    return 0;
}