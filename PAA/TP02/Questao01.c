    #include <stdio.h>
    #include <stdlib.h>

    int* cria_vetor(int n) {
        int* vetor = malloc(n * sizeof(int));
        if (vetor == NULL) {
            printf("Erro ao alocar memoria.\n");
            exit(1);
        }
        return vetor;
    }

    int* leitor(int n) {
        int *vetor = cria_vetor(n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &vetor[i]);
        }
        return vetor;
    }

    int compara_inteiros(const void* a, const void* b) {
        return (*(int*)a - *(int*)b);
    }

    int *remove_repetido(int *vetor, int n) {
        /**
         * Assumindo que os números sempre estarão ordenados (ex 1 2 4 5 6 8 4 2 -> 1 2 4 5 6 8) - nao posso assumir isso
         */
        int n_original = n;
        int cont = 0;
        
        qsort(vetor, n, sizeof(int), compara_inteiros);
        
        for (int i = 1; i < n; i++) {
            if (vetor[i] == vetor[i - 1]) {
                cont++;
                for (int j = i; j < n - 1; j++) {
                    vetor[j] = vetor[j + 1];
                }
                n--;
                i--; 
            }
        }

        int* novo_vetor = malloc(n * sizeof(int));
        
        //printf("\nVetor ordenado sem repetidos:\n");

        for (int j = 0; j < n; j++) {
            novo_vetor[j] = vetor[j];
            printf("%d ", novo_vetor[j]);
        }
        //printf("Foram removidos %d elementos repetidos.\n", cont);
        //free(vetor);
        return novo_vetor;
    }

    int main() {
        int n;
        scanf("%d", &n);

        int* dados = leitor(n);
        int* novo_vetor = remove_repetido(dados, n);
        free(dados);
        free(novo_vetor);
        return 0;
    }