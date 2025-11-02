/**
 *  Author: Enzo Corradini
 *  Questão 03 do Trabalho 01 de PAA
 * 
 *  Identificação de outliers em um conjunto de dados.
 * 
 *  Input : N, S, K, L e uma matriz SxN de distâncias.
 * 
 *  Output: Número de outliers encontrados.
 * 
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX_S 100
#define MAX_N 100  // assumindo limite máximo para N por segurança

typedef struct {
    int N;   // total de objetos no conjunto
    int S;   // número de linhas a considerar
    int K;   // índice do k-ésimo vizinho
    double L;
    double MATRIX[MAX_S][MAX_N]; // matriz SxN
} ENTRY_DATA;

void ordenar(double v[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                double tmp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = tmp;
            }
        }
    }
}

int Leitor(ENTRY_DATA *DATA) {
    if (scanf("%d %d %d %lf", &DATA->N, &DATA->S, &DATA->K, &DATA->L) != 4)
        return 0;

    for (int i = 0; i < DATA->S; i++) {
        for (int j = 0; j < DATA->N; j++) {
            scanf("%lf", &DATA->MATRIX[i][j]);
        }
    }
    return 1;
}

int Outliers(ENTRY_DATA *data) {
    int count = 0;

    for (int i = 0; i < data->S; i++) {
        double distancias[MAX_N];

        for (int j = 0; j < data->N; j++) {
            distancias[j] = data->MATRIX[i][j];
        }

        ordenar(distancias, data->N);

        if (distancias[data->K + 1] > data->L) {
            count++;
        }
    }

    return count;
}

int main() {
    ENTRY_DATA data;
    
    if (!Leitor(&data)) {
        printf("Erro ao ler entrada.\n");
        return 1;
    }

    int result = Outliers(&data);
    printf("%d\n", result);

    return 0;
}
