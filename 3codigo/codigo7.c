#include <stdio.h>

int main() {
    int v[10], inv[10];
    for(int i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i+1);
        scanf("%d", &v[i]);
    }
    for(int i = 0; i < 10; i++) {
        inv[i] = v[9 - i];
    }
    printf("Vetor invertido: ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", inv[i]);
    }
    return 0;
}
