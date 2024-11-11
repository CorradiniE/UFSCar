#include <iostream>
#include "ContaCorrente.h"

using namespace std;

int main() {
    ContaCorrente c1(1000, 1250);

    cout << endl << "Antes da transferência" << endl << endl;

    c1.imprime();
    cout << endl;

    return 0;




}