#include <stdio.h>
#include <math.h>
#include<stdlib.h> //Modifiquei inserindo esta biblioteca

int main() {
    int A, B, soma, produto, quad, modulo;
    float raiz;
    system("chcp 65001>nul");

    // Entrada dos valores
    printf("Entre com o primeiro valor:\n");
    scanf("%d", &A);
    printf("Entre com o segundo valor:\n");
    scanf("%d", &B);

    // Cálculos
    soma = A + B;
    produto = A * (int)pow(B,2); 
    quad= pow(A,2);
    raiz= sqrt(pow(A,2) + pow(B,2));
    modulo= abs(A);

    // Saída formatada corretamente
    printf("A soma dos valores é: %d\n", soma);
    printf("O produto do primeiro pelo quadrado do segundo é: %d\n", produto);
    printf("O quadrado do primeiro número é: %d\n", quad);
    printf("A raiz quadrada da soma dos quadrados é: %.2f\n", raiz);
    printf("O módulo do primeiro número é: %d\n", modulo);
    return 0;
}
