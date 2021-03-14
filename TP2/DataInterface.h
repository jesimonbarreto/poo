
#ifndef DATAINTERFACE_H
#define DATAINTERFACE_H

#include <iostream>
#include <exception>
#include <string>

using namespace std;

class DataInterface {
    protected:
        int dia;
        int mes;
        int ano;
        string formato;
        char separador = '/';
    public:
        DataInterface(string p_formato, string formato) :formato(p_formato) {
            int i = 0;
            string sDia, sMes, sAno;
            while ( (i<formato.size()) && (formato[i]!=separador) ) {
                sDia.push_back(formato[i]);
                i++;
            }
            dia = stoi(sDia);
            i++;
            while ( (i<formato.size()) && (formato[i]!=separador) ) {
                sMes.push_back(formato[i]);
                i++;
            }
            mes = stoi(sMes);
            i++;
            while ( (i<formato.size()) && (formato[i]!=separador) ) {
                sAno.push_back(formato[i]);
                i++;
            }
            ano = stoi(sAno);
        }
        ~DataInterface() { };
        virtual string getData() = 0;
};


#endif
