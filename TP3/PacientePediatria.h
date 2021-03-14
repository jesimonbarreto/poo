#ifndef PACIENTEPEDIATRIA_H
#define PACIENTEPEDIATRIA_H

#include <iostream>
#include "Pessoa.h"
#include "Paciente.h"

using namespace std;

class PacientePediatria : public Paciente{
    private:
        
    public:
        virtual string getFicha(){return "ficha";};
};

#endif