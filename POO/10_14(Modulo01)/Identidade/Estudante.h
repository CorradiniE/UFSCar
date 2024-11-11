#ifndef ESTUDANTE_H
#define ESTUDANTE_H

#include <string>
#include <iostream>
using namespace std;

class Estudante {

public:
    
    // Construtor

    Estudante(int RA, string nome, string curso, int idade);

    // métodos getters/setters

    void setRA(int RA);
    int getRA();
    void setNome(string nome);
    string getNome();
    void setCurso(string curso);
    string getCurso();
    void setIdade(int idade);
    int getIdade();

    // método imprime

    void imprime();

    bool compare(Estudante outro);
private:
    int RA;
    string nome;
    string curso;
    int idade;
};

#endif