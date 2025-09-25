#include <stdio.h>

int main() {
    int segundos, horas, minutos, segundos_restantes;
    
    printf("Digite a duracao em segundos: ");
    scanf("%d", &segundos);
    
    horas = segundos / 3600;
    segundos_restantes = segundos % 3600;
    minutos = segundos_restantes / 60;
    segundos_restantes = segundos_restantes % 60;
    
    printf("%d:%d:%d\n", horas, minutos, segundos_restantes);
    
    return 0;
}