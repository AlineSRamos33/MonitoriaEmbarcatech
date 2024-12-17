#include <stdio.h>
#include<stdlib.h>

int main() {


    system("chcp 65001>nul");
    int num1, num2, num3;
    float media;
    printf("Digite três números inteiros: ");
    scanf("%d %d %d", &num1, &num2, &num3); // Erro: falta '&' em 'num3'
    media = num1 + num2 + num3 / 3; // Erro: falta de parênteses na fórmula
    printf("A média é: %.2f\n", media);
    return 0;
}