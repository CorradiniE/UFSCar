#ifndef PESSOA_H
#define PESSOA_H

#include <string>
#include <iostream>

using namespace std;

class Pessoa{
public:
    Pessoa(string nome, int idade);
    void setNome (string nome);
    string getNome() const;
    void setIdade(int idade);
    int getIdade() const;
    virtual void imprime() const;  // Virtual faz com que a função 'imprime' assuma a forma daquelo pelo qual foi declarado (Filho declarado no espaço do Pai((com malloc)) é impresso como Filho)
private:
    string nome;
    int idade;
}

#endif