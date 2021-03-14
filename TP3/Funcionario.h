#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <iostream>
#include "Pessoa.h"

using namespace std;

class Funcionario : public Pessoa{
    private:

    public:
        string getDados(){return "Nome: "nome+"\nContato: "+contato};
        
};

#endif