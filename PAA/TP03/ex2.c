#include <stdio.h>
#include <string.h>
/**
 * agora estou em casa, muito ruim ficar escrevendo o raciocinio por aqui..
 * 
 * Caso 1)
 *  nao usa o ultimo valor
 * Caso 2)
 *  usa o ultimo valor
 * 
 * Recorrencia:
 *  A[i,r] = A[i-1,r] + A[i-1, (r - i % D + D) % D],
 * 
 * Retorna:
 *  A[N,0] 
 * 
 */
int main() {
    int N, D;

    while (1) {
        scanf("%d %d", &N, &D);
        if (N == 0) break;

        long long A[101][101] = {0};
        // Caso Base
     A[0][0] = 1;

        
        for (int i = 1; i <= N; i++) {
            for (int r = 0; r < D; r++) {
                // não usa o i-ésimo valor
             A[i][r] += A[i-1][r];

                // usa i-ésimo valor
                int novo_resto = (r + i) % D;
             A[i][novo_resto] += A[i-1][r];
            }
        }

        printf("%lld\n", A[N][0]);
    }

    return 0;
}
