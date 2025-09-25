#include <stdio.h>

int main() {
    char nome1[50], nome2[50];
    int idade1, idade2;
    double media;
    
    printf("Dados da primeira pessoa:\n");
    printf("Nome: ");
    scanf("%s", nome1);
    printf("Idade: ");
    scanf("%d", &idade1);
    
    printf("Dados da segunda pessoa:\n");
    printf("Nome: ");
    scanf("%s", nome2);
    printf("Idade: ");
    scanf("%d", &idade2);
    
    media = (idade1 + idade2) / 2.0;
    
    printf("A idade media de %s e %s eh %.1lf anos\n", nome1, nome2, media);
    
    return 0;
}