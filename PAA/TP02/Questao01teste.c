    #include <stdio.h>
    #include <stdlib.h>

    int* cria_vetor(int n) {
        int* vetor = malloc(n * sizeof(int));
        //if (vetor == NULL) {
        //  printf("Erro ao alocar memoria.\n");
        //    exit(1);
        //}
        return vetor;
    }

    int* leitor(int n) {
        int *vetor = cria_vetor(n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &vetor[i]);
        }
        return vetor;
    }

    int *remove_repetido(int *vetor, int n) {
        
        for (int i = 0; i < n; i++) {
            for(int j = 0; j < i; j++) {
                if(vetor[i] == vetor[j]) {
                    vetor[i] = vetor[i + 1];
                }
            }
        }
        return vetor;
    }
    
    int main() {
        int n;
        scanf("%d", &n);

        int* dados = leitor(n);    
        dados = remove_repetido(dados, n);

        for(int i = 0; i < n; i++) {
            printf("%d ", dados[i]);
        }

        free(dados);
        return 0;
    }