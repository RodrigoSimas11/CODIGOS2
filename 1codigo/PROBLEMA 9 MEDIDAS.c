#include <stdio.h>

int main() {
    double a, b, c;
    
    printf("Digite a medida A: ");
    scanf("%lf", &a);
    printf("Digite a medida B: ");
    scanf("%lf", &b);
    printf("Digite a medida C: ");
    scanf("%lf", &c);
    
    printf("Area do quadrado = %.4lf\n", a * a);
    printf("Area do triangulo = %.4lf\n", (a * b) / 2);
    printf("Area do trapezio = %.4lf\n", ((a + b) * c) / 2);
    
    return 0;
}