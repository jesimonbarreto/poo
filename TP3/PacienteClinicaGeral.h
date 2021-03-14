#ifndef PACIENTECLINICAGERAL_H
#define PACIENTECLINICAGERAL_H

#include <iostream>
#include "Pessoa.h"
#include "Paciente.h"

using namespace std;

class PacienteClinicaGeral : public Paciente{
    private:
        
    public:
        virtual string getFicha(){return "ficha";};
};

#endif