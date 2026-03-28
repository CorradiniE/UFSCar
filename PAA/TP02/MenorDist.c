#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef long long ll;
const ll INF = (ll)4e18;

// --- estrutura de grafo por listas encadeadas em arrays ---
int *head;     // cabeça da lista para cada vértice
int *to;       // destino da aresta i
int *nxt;      // próximo índice na lista
int *wgt;      // peso da aresta i
int edge_cnt;

// inicializa estruturas do grafo
void init_graph(int V, int E) {
    head = (int*)malloc(sizeof(int) * V);
    to   = (int*)malloc(sizeof(int) * E);
    nxt  = (int*)malloc(sizeof(int) * E);
    wgt  = (int*)malloc(sizeof(int) * E);
    if (!head || !to || !nxt || !wgt) {
        fprintf(stderr, "Erro: memoria insuficiente\n");
        exit(1);
    }
    for (int i = 0; i < V; ++i) head[i] = -1;
    edge_cnt = 0;
}

void add_edge(int a, int b, int w) {
    to[edge_cnt] = b;
    wgt[edge_cnt] = w;
    nxt[edge_cnt] = head[a];
    head[a] = edge_cnt++;
}

// --- heap minimo (dist, node) ---
ll *heap_dist;
int *heap_node;
int heap_sz;

void heap_init(int capacity) {
    heap_dist = (ll*)malloc(sizeof(ll) * (capacity + 5));
    heap_node = (int*)malloc(sizeof(int) * (capacity + 5));
    if (!heap_dist || !heap_node) {
        fprintf(stderr, "Erro: memoria insuficiente (heap)\n");
        exit(1);
    }
    heap_sz = 0;
}

void heap_swap(int i, int j) {
    ll td = heap_dist[i]; heap_dist[i] = heap_dist[j]; heap_dist[j] = td;
    int tn = heap_node[i]; heap_node[i] = heap_node[j]; heap_node[j] = tn;
}

void heap_push(ll d, int node) {
    int i = ++heap_sz;
    heap_dist[i] = d;
    heap_node[i] = node;
    while (i > 1) {
        int p = i >> 1;
        if (heap_dist[p] <= heap_dist[i]) break;
        heap_swap(p, i);
        i = p;
    }
}

int heap_empty() {
    return heap_sz == 0;
}

void heap_pop(ll *out_d, int *out_node) {
    *out_d = heap_dist[1];
    *out_node = heap_node[1];
    heap_dist[1] = heap_dist[heap_sz];
    heap_node[1] = heap_node[heap_sz];
    heap_sz--;
    int i = 1;
    while (1) {
        int l = i << 1;
        int r = l + 1;
        int smallest = i;
        if (l <= heap_sz && heap_dist[l] < heap_dist[smallest]) smallest = l;
        if (r <= heap_sz && heap_dist[r] < heap_dist[smallest]) smallest = r;
        if (smallest == i) break;
        heap_swap(i, smallest);
        i = smallest;
    }
}

// --- Dijkstra ---
ll *dist;

ll dijkstra(int V, int target) {
    dist = (ll*)malloc(sizeof(ll) * V);
    if (!dist) {
        fprintf(stderr, "Erro: memoria insuficiente (dist)\n");
        exit(1);
    }
    for (int i = 0; i < V; ++i) dist[i] = INF;
    dist[0] = 0;

    // capacidade do heap: no pior caso podemos inserir até E elementos (ou mais), alocamos E+5.
    heap_init(edge_cnt + 5);
    heap_push(0, 0);

    while (!heap_empty()) {
        ll d; int u;
        heap_pop(&d, &u);
        if (d != dist[u]) continue; // entrada obsoleta
        if (u == target) return d; // já alcançou destino (ótimo)
        for (int e = head[u]; e != -1; e = nxt[e]) {
            int v = to[e];
            ll nd = d + (ll)wgt[e];
            if (nd < dist[v]) {
                dist[v] = nd;
                heap_push(nd, v);
            }
        }
    }
    return dist[target];
}

int main() {
    int V, E;
    if (scanf("%d %d", &V, &E) != 2) return 0;

    init_graph(V, E);

    for (int i = 0; i < E; ++i) {
        int A, B, W;
        scanf("%d %d %d", &A, &B, &W);
        add_edge(A, B, W);
    }

    ll ans = dijkstra(V, V - 1);
    // o enunciado garante que existe caminho; imprimimos o valor
    printf("%lld\n", ans);

    // liberar memoria (opcional)
    free(head); free(to); free(nxt); free(wgt);
    free(heap_dist); free(heap_node); free(dist);
    return 0;
}
