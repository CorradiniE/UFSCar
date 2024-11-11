#include "Aluno.h"

Aluno::Aluno(string nome, int idade, int RA) 
: Pessoa(nome, idade), RA(RA) {

}

void Aluno::setRA(int RA) {
    this->RA = RA;
}

int Aluno::getRA() const {
    return RA;
}

void Aluno::imprime() const {
    /*
    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << endl;
    Não serve, uma vez que nome e idade são elementos privados da classe Pessoa.
    Se fosse elemento 'protected', a classe Filho tem acesso ao atributo da classe Pai.

    cout << "Nome: " << this->getNome << endl;
    cout << "Idade: " << this->getIdade << endl;
    */
    Pessoa::imprime();
    cout << "RA: " << RA << endl;

}
