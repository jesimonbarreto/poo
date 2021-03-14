// Arquivo: Exemplo2.cpp
#include <iostream>
#include <string>
#include "Data/Data.h"
using namespace std;

int main(){
    string i = "Casa";
    string j = "12/32/3344";
    Data *d;
    d=new Data(i,j);
    cout<<"\n"<<d->getData()<<"\n";
    delete(d);
    return 0;
//.....
} 