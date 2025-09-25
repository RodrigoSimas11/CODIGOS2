#include <stdio.h>

int main() {
    float preco, dinheiro, total;
    int quantidade;
    printf("Preco unitario do produto: ");
    scanf("%f", &preco);
    printf("Quantidade comprada: ");
    scanf("%d", &quantidade);
    printf("Dinheiro recebido: ");
    scanf("%f", &dinheiro);
    total = preco * quantidade;
    if (dinheiro >= total) {
        printf("TROCO = %.2f\n", dinheiro - total);
    } else {
        printf("DINHEIRO INSUFICIENTE. FALTAM %.2f\n", total - dinheiro);
    }
    return 0;
}