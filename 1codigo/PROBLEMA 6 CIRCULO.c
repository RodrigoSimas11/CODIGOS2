#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main() {
    double raio, area;
    
    printf("Digite o valor do raio do circulo: ");
    scanf("%lf", &raio);
    
    area = PI * pow(raio, 2);
    
    printf("AREA = %.3lf\n", area);
    
    return 0;
}