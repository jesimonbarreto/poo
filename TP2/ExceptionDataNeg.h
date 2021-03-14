#ifndef EXCEPTIONDATANEG_H
#define EXCEPTIONDATANEG_H

#include <iostream>
#include <exception>
#include <string>


using namespace std;

class ExceptionDataNeg : public exception {
    private:
        string msg="Erro! Data Negativa nao existe";
    public:
        string getErro();
        
};

#endif