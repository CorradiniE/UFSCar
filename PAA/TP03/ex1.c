#include <stdio.h>
#include <string.h>

/*
Separar ouro encontrado em baú por peso. S(1 ->i) = S(i+1 -> N)

Nota ao professor, estou no onibus, entao a linha de raciocinio sera feita por aqui mesmo visto que estou sem papel.   :/

 @ De primeira vista, parece que um guloso resolveria (ordenar e intercalar um pro outro), mas rapidamente percebe-se que não é simples assim.

Programação dinâmica que associo: 

@ De certa forma lembra os dois exercícios vistos na aula de exercícios de Terça feira agora (16/12).  
 Jogo de seleção & Divisor de String.
    @ Considerando o jogo de seleção, faz sentido pensar que pelo fato dos dois estarem aplicando a mesma estratégia (visando maior pontuação) a diferença resultante é minima.
--->@ Mas preciso fazer estudo de caso de Soluções 
 
Subsequencia mais longa crescente & Soma nao contígua de sub vetor (( A[i] = max{1 + A[j], 1}, tal que j = 1 .. i - 1 ));
    @ Talvez, pegando esse vetor A[i] resultante e removendo alternadamene permite achar a solução. 

 Entrada: cada linha apresenta N moedas de peso W:

Mochila Binaria
    Dif = S - 2*soma_escolhida
    S' <= 2*S
    Pessoa 1 recebe S': 
    (S - S') - S' = S - 2S'
       p2'     p1
    

N w1 w2 w3 .. wN
e.g:
4 1 3 4 6 
Foco: min{ Dif(S1, S2) } = min {S - 2S'} 

Caso 1)
Dif(S1, S2) = 0 => S - 2S' = 0
    => S1 = S2  =>
    => S' = S/2
Caso 2)
Dif(S1, S2) != 0
    S' deve ser o mais próximo de S/2
    S' = max{s<=S/2}

Saída: vetor A[i] que traga em cada posição a menor diferença entre quanto cada um recebe.

*/


int main() {
    int n;

    while (1) {
        scanf("%d", &n);

        if (n == 0) break;
        int moedas[100];
        int soma_total = 0;

        for (int i = 0; i < n; i++) {
            scanf("%d", &moedas[i]);
            soma_total += moedas[i];
        }

        int metade = soma_total / 2;

        // A[s] = 1 se é possível formar soma s
        // W <= 500
        // N <= 100 
        // Limite de soma = 50000 
        int A[50000] = {0};

        A[0] = 1;  //zero moedas tem 

        for (int i = 0; i < n; i++) {
            int peso = moedas[i];
            for (int s = metade; s >= peso; s--) {
                if (A[s - peso]) {
                    A[s] = 1;
                }
            }
        }

        int melhor_soma = 0;
        for (int s = metade; s >= 0; s--) {
            if (A[s]) {
                melhor_soma = s;
                break;
            }
        }
        //Confirmando valor - output pedido
        int diferenca = soma_total - 2 * melhor_soma;
        printf("%d\n", diferenca);
    }

    return 0;
}