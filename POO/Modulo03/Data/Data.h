#ifndef DATA_H
#define DATA_H

class Data{
    public: 
        Data(int dia, int mes, int ano);
        void imprime();
        void imprimePorExtenso();
        bool anoBissexto();
        int compare();
    private:
        int dia, mes, ano;
};

#endif