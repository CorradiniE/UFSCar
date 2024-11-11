#include "Data.h"

int main() {

    Data d1(11,11,2024);
    Data d2(11,12,2024);
    Data d3(11,11,2024);

    d1.imprime();
    d1.imprimePorExtenso();
    d2.imprime();
    d2.imprimPorExtenso();

    d1.compare(d2);
    d2.compare(d3);
    d1.compare(d3);    
}
