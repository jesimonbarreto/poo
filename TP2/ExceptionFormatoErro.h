#ifndef EXCEPTIONFORMATOERRO_H
#define EXCEPTIONFORMATOERRO_H

#include <iostream>
#include <exception>
#include <string>


using namespace std;

class ExceptionFormatoErro : public exception {
    private:
        string msg="Erro! Data no Formato não aceito!";
    public:
        string getErro(){return msg;};
        
};

#endif