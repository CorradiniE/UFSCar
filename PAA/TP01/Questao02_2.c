/**
 *  Author: Enzo Corradini
 *  Parte 2 da Questão 02 do Trabalho 01 de PAA
 * 
 *  Permutação de palavras que contenham repetição de letras.
 * 
 *  Input : Palavra com possíveis letras repetidas (máximo 15 letras).
 * 
 *  Output: Todas as permutações possíveis da palavra, exceto a original, em ordem lexicográfica.
 * 
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int comparar(const void *a, const void *b) {
    return (*(char *)a - *(char *)b);
}

int proxima_permutacao(char *str, int n) {
    int i = n - 2;
    while (i >= 0 && str[i] >= str[i + 1]) i--;
    if (i < 0) return 0;

    int j = n - 1;
    while (str[j] <= str[i]) j--;

    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;

    for (int a = i + 1, b = n - 1; a < b; a++, b--) {
        temp = str[a];
        str[a] = str[b];
        str[b] = temp;
    }

    return 1;
}

int main() {
    char palavra[16];
    printf("Insira uma palavra: ");
    scanf("%s", palavra);

    char original[16];
    strcpy(original, palavra);

    int n = strlen(palavra);

    qsort(palavra, n, sizeof(char), comparar);

    if (strcmp(palavra, original) != 0)
        printf("%s\n", palavra);

    while (proxima_permutacao(palavra, n)) {
        if (strcmp(palavra, original) != 0)
            printf("%s\n", palavra);
    }

    return 0;
}