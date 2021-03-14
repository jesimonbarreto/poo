#include "Data.h"
#include "ExceptionDataNeg.h"
#include "ExceptionFormatoErro.h"
#include <iostream>
#include <string>

/*
Jesimon Barreto Santos

matricula: 2016070093

*/


using namespace std;

int main(){

    try{
        Data d("aaaa-mm-dd","12/02/2010");
        
        cout<< d.getDia() << " dia\n" <<endl;
        cout<< d.getMes() << " mes\n" <<endl;
        cout<< d.getDataExtenso() <<"\n"<<endl;

        d.subDias(80);

        cout<< d.getDia() << " dia\n" <<endl;
        cout<< d.getMes() << " mes\n" <<endl;
        cout<< d.getDataExtenso() <<"\n"<<endl;
        cout<< d.getData()<< "\n";


    }catch(ExceptionDataNeg a){
        cout << a.getErro()<<"\n"<<endl;

    }catch(ExceptionFormatoErro a){
        cout << a.getErro()<<"\n"<<endl;

    }
    catch(...){
        cout << "Erro Desconhecido\n"<<endl; 
    }
    
    return 0;
} 