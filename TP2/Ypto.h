#ifndef YPTO_H
#define YPTO_H

#include <iostream>
#include "ExceptionPosition.h"
#include <vector>
using namespace std;

class Ypto{
    private:
        vector<int> numbers;
    public:
        Ypto();
        ~Ypto();
        //Adiciona um numero inteiro como ultimo da lista de inteiros
        void addNumber(int num);
        //Retorna valor do vetor que está na posição do parametro 'position'. Sabendo que foi codificado para que a primeira posição começasse de 1 
        int getNumberPosition(int position);
        //Alterar valor de posição já inserida no vetor. 'posicao' codificado para começar do 1 acessando vetor
        void setNumPosition(int position, int value);
        //Retorna a soma de todos os valores no vetor
        int soma();
        //Retorna o produto de todos os valores no vetor
        int produto();
        void printAll();
};

#endif