#ifndef PACIENTEORTODONTIA_H
#define PACIENTEORTODONTIA_H

#include <iostream>
#include "Pessoa.h"
#include "Paciente.h"

using namespace std;

class PacienteOrtodontia : public Paciente{
    private:
        
    public:
        virtual string getFicha(){return "ficha";};
};

#endif