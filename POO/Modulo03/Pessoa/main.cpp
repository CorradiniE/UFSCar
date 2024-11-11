#include "Aluno.h"
#include "Professor.h"

int main(){
    Aluno Enzo("Enzo",  20, 822915);

    Professor Vika("Victoria", 35, 10000);

    Enzo.imprime();

    cout << endl;

    Vika.imprime();
}
