#include "pilha.h"

pilha::pilha() : pilha(10){
    cout << "Montando pilha com 10 espaços" << endl;
    
}

pilha::pilha(int capacidade) {
    cout << "Montando pilha com valores variáveis" << endl;
    this->capacidade = capacidade;
    this->pos = pos;
    this->elementos = new int[capacidade];
}

pilha::~pilha() {
    cout << "Destruindo a pilha" << endl;
    delete elementos;
}

bool pilha::empilha(int x) {
    bool ok = false;
    if ( this->tamanho() != this->capacidade) {
        elementos[pos++] = x;
        //pos++;
        ok = true;
    }
    return ok;
}

bool pilha::desempilha(int x) {
    bool ok = false;
    if ( this->tamanho() != 0) {
        x = elemento[pos - 1];
        pos--;
        ok = true;
    }
    return ok;
}

int pilha::tamanho() const {
        return pos;
}

void pilha::imprime() const {
    for (int i = pos - 1; i >= 0; i--){
        cout << elementos[i]    
    }
    cout << ""
}