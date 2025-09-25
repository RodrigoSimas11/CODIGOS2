#include <stdio.h>

int main() {
    char escala;
    float temp, convertido;
    printf("Voce vai digitar a temperatura em qual escala (C/F)? ");
    scanf(" %c", &escala);
    if (escala == 'F' || escala == 'f') {
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%f", &temp);
        convertido = (temp - 32) * 5 / 9;
        printf("Temperatura equivalente em Celsius: %.2f\n", convertido);
    } else if (escala == 'C' || escala == 'c') {
        printf("Digite a temperatura em Celsius: ");
        scanf("%f", &temp);
        convertido = (temp * 9 / 5) + 32;
        printf("Temperatura equivalente em Fahrenheit: %.2f\n", convertido);
    } else {
        printf("Escala invalida!\n");
    }
    return 0;
}