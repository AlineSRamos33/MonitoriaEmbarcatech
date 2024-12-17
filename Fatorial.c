#include <stdio.h>
#include<stdlib.h>  // Modifiquei inserindo a biblioteca para teste
int fatorial (int n) {   

if (n == 0)        
return 1;    
return n * fatorial(n - 1); 
}
int main() {
system("chcp 65001>nul");
int num;  
printf("Digite um número inteiro: ");    
scanf("%d", &num); 
printf("O fatorial de %d é %d\n", num, fatorial(num));    
return 0;
}
