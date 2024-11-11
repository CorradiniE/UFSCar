
#include "Estudante.h"

int main() {

    Estudante e1(123456, "fulano", "BCC", 20);
    Estudante e2(654321, "beltrano", "ENC", 19);

    e1.imprime();

    e2.imprime();

    cout << "Nome do 1o Estudante: " << e1.getNome() << endl;

    cout << "Idade do 1o Estudante: " << e1.getIdade() << endl << endl;

    cout << "Idade do 2o Estudante: " << e2.getIdade() << endl << endl;

    if (e1.compare(e2)) {
        cout << "e1 é mais velho que e2" << endl;
    } else {
        cout << "e1 não é mais velho que e2" << endl;
    }

    if (e2.compare(e1)) {
        cout << "e2 é mais velho" << endl;
    } else {
        cout << "e2 não é mais velho que e1" << endl;
    }

    return 0;
}