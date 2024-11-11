#include "Pessoa.h"

Pessoa::Pessoa(string nome, int idade)
: nome(nome), idade(idade) {

}

void Pessoa::setNome(string nome) {
    this->nome = nome
}
string Pessoa::getNome() const {
    return nome;
}

void Pessoa::setIdade(int idade) {
    this->idade = idade;
}
string Pessoa::getIdade() const {
    return idade;
}

void Pessoa::imprime() const {
    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << endl;
}