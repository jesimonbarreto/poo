#ifndef DENTISTA_H
#define DENTISTA_H

#include <iostream>
#include "Funcionario.h"

using namespace std;

class Dentista : public Funcionario{

    private:

    public:
        virtual string getFichaContratual();
        
};

#endif