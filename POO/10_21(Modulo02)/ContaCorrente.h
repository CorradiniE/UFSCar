#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H

class ContaCorrente {
public:
    ContaCorrente(int numero, double saldo = 0);  // Construtor
    virtual ~ContaCorrente();  // Destrutor
    // Métodos da Classe 
    int getNumero() const;
    double getSaldo() const;
    bool retirada(double valor);
    bool deposito(double valor);
    bool transferencia(ContaCorrente &outra , double valor);
    void imprime() const;

private:  // Atributos da Clase
    int numero;
    double saldo;

};

#endif 