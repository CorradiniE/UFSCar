#include "Professor.h"

Professor::Professor(string nome, int idade, int RA) 
: Pessoa(nome, idade), RA(RA) {

}

void Professor::setSalario(float salario) {
    this->salario = salario;
}

int Professor::getSalario() const {
    return salario;
}

void Professor::imprime() const {
    /*
    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << endl;
    Não serve, uma vez que nome e idade são elementos privados da classe Pessoa.
    Se fosse elemento 'protected', a classe Filho tem acesso ao atributo da classe Pai.

    cout << "Nome: " << this->getNome << endl;
    cout << "Idade: " << this->getIdade << endl;
    */
    Pessoa::imprime();
    cout << "Salário: " << salario << endl;

}
