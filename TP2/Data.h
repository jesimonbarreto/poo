#ifndef DATA_H
#define DATA_H

#include <iostream>
#include <exception>
#include <string>
#include "DataInterface.h"
#include "ExceptionDataNeg.h"


using namespace std;

class Data : public DataInterface{
private:
        char separadorB = '-';
        int separadorAtual = 1; //0 para '/'  e 1 para '-'
        void updateDia();
        void updateMes(); 
        int getFormatoData();
public:
        Data(string pformato, string pdata);
        ~Data();
        virtual string getData();
        void somarDias(int d);
        void somarMeses(int m);
        void somarAno(int a);
        void subDias(int d);
        void subMeses(int m);
        void subAno(int a);
        int getDia();
        int getMes();
        int getAno();
        int calcDiferencaDataDias(Data d1);
        string convertFormato(string formato);
        string getDataExtenso();
        bool operator= (Data d);
};

#endif
