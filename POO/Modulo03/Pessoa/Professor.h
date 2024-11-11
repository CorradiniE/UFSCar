#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "Pessoa.h"

class Professor : public Pessoa{

public:
    Professor(string nome, int idade, int RA);
    void setSalario(float salario);
    float getSalario() const;
    void imprime() const;
private:
    float salario;
};


#endif