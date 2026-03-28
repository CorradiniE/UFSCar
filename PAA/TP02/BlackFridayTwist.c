#include <stdio.h>
#include <stdlib.h>

int* leitor(int n, int* vetor) { 
    for (int i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }
    return vetor;
}

int compara_inteiros(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int cmp_desc(const void *a, const void *b) {
    int x = *(int*)a;
    int y = *(int*)b;
    return y - x;
}

long long desconto(int* vetor, int n) {
    long long sum = 0;
    int j = 2;  //nem sei o por que, mas que se foda - ta funcionando 
    /*
    qsort(vetor, n, sizeof(int), compara_inteiros);

    for (int i = 0; i < n; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n\n");    
    */
   
    qsort(vetor, n, sizeof(int), cmp_desc);

    //printf("\n\n");

    for (int i = 0; i < n; i++){
        //printf("%d ", vetor[i]);
    }
    //printf("\n\n");

    for(int i = 0; i + j < n; i += 2) {
        //printf("%d ", vetor[i+1]);
        sum += vetor[i + 1];
        j++;
    }
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);

    int* vetor = malloc(n * sizeof(int));
    
    vetor = leitor(n, vetor);
    //porra de presentation error - tem que ficar adivinhando isso agora.
    printf("%lld\n", desconto(vetor, n));
    
    free(vetor);
    return 0;
}
