/**
 *  Author: Enzo Corradini
 *  Questão 01 do Trabalho 01 de PAA.
 * 
 *  Imprime um padrão recursivo de traços baseado em um número N.
 * 
 *  Input : Um número inteiro N.
 *  
 *  Output: Um padrão de traços conforme o exemplo.
 * 
 */


#include <stdio.h>

void imprimirPadrao(int n) {
    if (n == 0) return;  // caso base

    imprimirPadrao(n - 1);   // parte de cima

    for (int i = 0; i < n; i++)  // imprime n traços
        printf("-");
    printf("\n");

    imprimirPadrao(n - 1);   // parte de baixo
}

int main() {
    int N;
    printf("Insira um número: ");
    scanf("%d", &N);

    imprimirPadrao(N);
    return 0;
}
