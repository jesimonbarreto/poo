#ifndef EXCEPTIONPOSITION_H
#define EXCEPTIONPOSITION_H

#include <iostream>
#include <exception>
using namespace std;

class ExceptionPosition : public exception {
    private:
        string msg="Erro Posicao nao existe";
    public:
        string getErro();
        
};

#endif