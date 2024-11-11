#ifndef ALUNO_H
#define ALUNO_H

#include "Pessoa.h"

class Aluno : public Pessoa{

public:
    Aluno(string nome, int idade, int RA);
    void setRA(int RA);
    int getRA();
    void imprime();
private:
    int RA;
};


#endif