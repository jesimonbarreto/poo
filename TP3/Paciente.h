#ifndef PACIENTE_H
#define PACIENTE_H

#include <iostream>
#include "Pessoa.h"

using namespace std;

class Paciente : public Pessoa{
    private:
        vector<string> historico;
    public:
        virtual string getDados(){return "Nome: "nome+"\nContato: "+contato;};
        virtual string addDiagnostivo(string diag){historico.push_back(diag);};
        virtual vector<string> getHistorico(){return historico;};
        virtual string getFicha()=0;
};

#endif