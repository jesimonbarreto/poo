// Arquivo: Exemplo2.cpp
#include "ExceptionPosition.h"
#include "Ypto.h"
#include <iostream>
using namespace std;

int main(){

    try{
        Ypto x1;
        Ypto x2;
        x2.addNumber(5);
        x2.addNumber(6);
        x2.addNumber(7);
        
        x1.addNumber(1);
        x1.addNumber(2);
        cout << x1.soma()<<"\n";
        cout << x2.soma()<<"\n";
        x1.addNumber(x2.getNumberPosition(1));//implementado para que primeira posição ficasse como 1;
        x2.setNumPosition(1,x2.getNumberPosition(1)+1);
        x1.printAll();
        x2.printAll();
        cout << x1.getNumberPosition(3)<<"\n";
        cout << x2.getNumberPosition(1)<<"\n";
        
        //Exception Position implementada
        cout << x2.getNumberPosition(10)<<"\n";

    }catch(ExceptionPosition e){
        cout <<"\n\n"<< e.getErro()<<"\n\n"<<endl;
    }  
    
    return 0;
//.....
} 