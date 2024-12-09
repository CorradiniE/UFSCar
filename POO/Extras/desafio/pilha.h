#ifndef PILHA_H
#define PILHA_H

#include <iostream>
using namespace std;

class pilha {
    public:
        pilha( );
        pilha(int capacidade);
        
        ~pilha();
        
        bool empilha(int x);

        bool desempilha(int& x);

        int tamanho() const;

        void imprime() const;
        
    private:
        int* elementos;
        int capacidade;
        int pos;
};

#endif