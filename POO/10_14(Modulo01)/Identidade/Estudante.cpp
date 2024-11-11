#include "Estudante.h"

// Construtor

Estudante::Estudante(int RA, string nome, string curso, int idade) {
    this->RA = RA;
    this->nome = nome;
    this->curso = curso;
    this->idade = idade;
}

// métodos getters/setters

void Estudante::setRA(int RA) {
    this->RA = RA;
}
    
int Estudante::getRA() {
    return this->RA;
}
    
void Estudante::setNome(string nome) {
    this->nome = nome;
}
    
string Estudante::getNome() {
    return this->nome;
}
    
void Estudante::setCurso(string curso) {
    this->curso = curso;
}
    
string Estudante::getCurso() {
    return this->curso;
}
    
void Estudante::setIdade(int idade) {
    this->idade = idade;
}

int Estudante::getIdade() {
    return this->idade;
}
    
// método imprime
    
void Estudante::imprime() {
    cout << "RA: " << this->RA << endl;
    cout << "Nome: " << this->nome << endl;
    cout << "Curso: " << this->curso << endl;
    cout << "Idade: " << this->idade << endl << endl;
}

bool Estudante::compare(Estudante outro) {
    return this->idade > outro.idade;
}