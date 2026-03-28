/**
 *  Autor: Enzo Corradini - 822915
 * 
 * Dada uma lista de produtos e seus preços, achar uma forma com que retorne o maior desconto possível
 * 
 * Provável: juntar os 3 mais caros e em ordem de assim em diante.
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int* le_dados(long int* vetor, int n) {
    for(int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
//        printf("%d ", vetor[i]); //teste
    }   
    return vetor;
}

int compara_inteiros(const void* a, const void* b) {
    return (*(long int*)a - *(long int*)b);
}

int* ordena_dados(long int* vetor, int n) {
    qsort(vetor, n, sizeof(int), compara_inteiros);    
    return vetor;
}

int conta_desconto(long int* vetor, int n) {
    int cont = 0;
    //considerando que o vetor já está ordenado em forma crescente
    for (int i = n - 3; i >= 0; i -= 3) {
        cont += vetor[i];
    }
    return cont;
}

int main() {
    int n;
    //le primeiro número (número de produtos)
    scanf("%d", &n);
    long int *vetor = (long int*)malloc(n * sizeof(long int));
    le_dados(vetor, n);
    ordena_dados(vetor, n);
    //printf("\n\nVetor ordenado:\n");
    //for(int i = 0; i < n; i++) {
    //    printf("%d ", vetor[i]); //teste
    //}
    printf("%d\n", conta_desconto(vetor, n));   
    return 0;
}