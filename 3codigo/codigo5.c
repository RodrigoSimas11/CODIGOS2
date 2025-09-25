#include <stdio.h>

int main() {
    int v[10], soma = 0;
    for(int i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i+1);
        scanf("%d", &v[i]);
        soma += v[i];
    }
    printf("Soma dos elementos = %d\n", soma);
    return 0;
}
