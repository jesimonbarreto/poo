#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>

using namespace std;

class Pessoa{
    private:
        string nome;
        string contato;
    public:
        virtual void setNome(string nome){nome = nome;};
        virtual string getNome(){return nome;};
        virtual void setContato(string contato){contato=contato;};
        virtual string getContato(){return contato};
        virtual string getDados()=0;
};

#endif