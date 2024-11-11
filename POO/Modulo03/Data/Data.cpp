#include "Data.h"
#include <iostream>  // Lê o 'cout'
#include <iomanip>
#include <string>

using namespace std


Data::Data(int dia, int mes, int ano) {     
    this->dia = dia;          // o atributo dia (elemento da classe) recebe o parametro(elemento da função) dia
    this->mes = mes;          // o atributo mes recebe o parametro mes
    this->ano = ano;          // o atributo ano recebe o parametro ano

    /*
    Data::Data(int dia, int mes, int ano):
    dia(dia), mes(mes), ano(ano){} 
    É lido da mesma forma que as 4 linhas de cima
    */
}  // Construtor

void Data::imprime() {
    cout << setfill('0') << setw(2) << dia << "/";
    cout << setfill('0') << setw(2) << mes << "/";
    cout << setfill('0') << setw(4) << ano << endl;
}

void Data::imprimePorExtenso() {
    string meses[12]{
        "Janeiro", "Fevereiro", "Março", "Abril", 
        "Maio", "Junho", "Julho", "Agosto", "Setmebro", 
        "Outubro", "Novembro", "Dezembro"
    }
    cout << setfill('0') << setw(2) << dia << "de";
    cout << meses[mes - 1] << "de";
    cout << setfill('0') << setw(4) << ano << endl;

}

bool Data::anoBissexto() {
    return( ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0))
}

int Data::compare(const Data& outra) {
  /*  if (this->ano != outra.ano) {
        //anos diferentes
        return this->ano - outra.ano
    } else if (this->mes != outra.mes) {
        //anos iguais, meses diferentes
        return this->mes - outro.mes;
    } else {
        //anos iguais, meses iguais
        return this->dia - outra.dia;
    }
  */
    int d1 = this->ano *10000 + this->mes * 100 + this->dia;
    int d2 = outra.ano *10000 + outra.mes * 100 + outra.dia;
    return d1 - d2;
}