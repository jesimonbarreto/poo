#ifndef SECRETARIA_H
#define SECRETARIA_H

#include <iostream>
#include "Funcionario.h"

using namespace std;

class Secretaria : public Funcionario{

    private:

    public:
        virtual string getFichaContratual();
 
};

#endif