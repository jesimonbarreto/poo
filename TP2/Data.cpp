#include <iostream>
#include <string>
#include <iostream>
#include <sstream>
#include <exception>
#include "Data.h"
#include "ExceptionDataNeg.h"
#include "ExceptionFormatoErro.h"
#include "DataInterface.h"

using namespace std;

Data::Data(string pformato, string pdata):DataInterface(pformato,pdata){
   
   //Verifica se está no formato certo
    getFormatoData();

    if(dia<0 || mes<0 || ano<0 ){
        throw ExceptionFormatoErro();
    }
}

Data::~Data(){  
}


int Data::calcDiferencaDataDias(Data d1){
    int anoD = ano - d1.getAno();
    int mesD = mes - d1.getMes();
    int diaD = dia - d1.getDia();
    if(anoD<0){
        anoD*=(-1);
    }
    if(mesD<0){
        mesD*=(-1);
    }
    if(diaD<0){
        diaD*=(-1);
    }
    
    return  ((anoD*365) + (mesD*30) + dia);
}

string Data::getDataExtenso(){
   string dataExt="";
   stringstream diaS;
   stringstream anoS;
   diaS << dia;
   anoS << ano;
   dataExt = diaS.str(); 
    switch(mes){
               case 1:
                    dataExt = dataExt + " DE JANEIRO DE " + anoS.str();
                    break;
               case 2:
                    dataExt = dataExt +" DE FEVEREIRO DE "+ anoS.str();
                    break;
               case 3:
                    dataExt = dataExt +" DE MARCO DE "+ anoS.str();
                    break;
               case 4:
                    dataExt = dataExt +" DE ABRIL DE "+ anoS.str();
                    break;
               case 5:
                    dataExt = dataExt +" DE MAIO DE "+ anoS.str();
                    break;
               case 6:
                    dataExt = dataExt +" DE JUNHO DE "+ anoS.str();
                    break;
               case 7:
                    dataExt = dataExt +" DE JULHO DE "+ anoS.str();
                    break;
               case 8:
                    dataExt = dataExt +" DE AGOSTO DE "+ anoS.str();
                    break;
               case 9:
                    dataExt = dataExt +" DE SETEMBRO DE "+ anoS.str();
                    break;
               case 10:
                    dataExt = dataExt +" DE OUTUBRO DE "+ anoS.str();
                    break;
               case 11:
                    dataExt = dataExt +" DE NOVEMBRO DE "+ anoS.str();
                    break;
               case 12:
                    dataExt = dataExt +" DE DEZEMBRO DE " + anoS.str();
                    break;        
    }
    return dataExt;                          
}


bool Data::operator= (Data d){
   bool equal = false;
    if(dia == d.getDia()){
        if(mes == d.getMes()){
            if(ano== d.getAno()){
                equal=true;
            }
        }
   }
   return equal;
}

int Data::getDia(){
    return dia;
}
int Data::getMes(){
    return mes;
}
int Data::getAno(){
    return ano;
}


string Data::getData(){
    string data="";
    stringstream diaS, mesS, anoS;
    diaS << dia;
    mesS << mes;
    anoS << ano;

    if(getFormatoData()==1){
        data = diaS.str()+"/"+ mesS.str()+"/"+ anoS.str();
    }else if(getFormatoData()==2){
        data = mesS.str()+"/"+ diaS.str()+"/"+ anoS.str();
    }else{
        data = anoS.str()+"-"+ mesS.str()+"-"+ diaS.str();
    }
    
    return data;
}

int Data::getFormatoData(){
    int form=1, i=0, separa1, separa2; 
    string p1, p2, p3;

    while ( (i<formato.size()) && (formato[i]!=separador) && (formato[i]!=separadorB) ) {
        p1.push_back(formato[i]);
        i++;
    }
    if(i>=formato.size()){
        //Erro no formato caso nao encontre separador valido
        throw ExceptionFormatoErro();
    }
    separa1=i;
    i++;
    while ( (i<formato.size()) && (formato[i]!=separador) ) {
        p2.push_back(formato[i]);
        i++;
    }
    if(i>=formato.size()){
        //Erro no formato caso nao encontre separador valido
        throw ExceptionFormatoErro();
    }
    separa2=i;


    i++;
    while ( (i<formato.size()) && (formato[i]!=separador) ) {
        p3.push_back(formato[i]);
        i++;
    }   
    if(formato[separa1]==formato[separa2]){
        
        if(p1=="dd" && p2=="mm" && p3=="aaaa" && formato[separa1]==separador){
            form=1;
        }else if(p1=="mm" && p2=="dd" && p3=="aaaa" && formato[separa1]==separador){
            form=2;
        }else if(p1=="aaaa" && p2=="mm" && p3=="dd" && formato[separa1]==separadorB){
            form=3;
        }else{
            throw ExceptionFormatoErro();
        }
    }else{
        throw ExceptionFormatoErro();
    }
    return form;
}


void Data::somarDias(int d){
    dia +=d;
    updateDia();
}

void Data::updateDia(){
    if(dia>30){
        mes += (int) dia / 30;
        while(dia>30){
            dia-=30;
        }
    }else if(dia<1){
        mes -= ((int) (-1*dia) / 30+1);
        while(dia<1){
            dia+=30;
        }
    }
    updateMes();
}

void Data::updateMes(){
    if(mes>12){
        ano += (int) mes / 12;
        while(mes>12){
            mes-=12;
        }
    }else if(mes<1){
        ano -= ((int) (-1*mes) / 12 +1);
        while(mes<1){
            mes+=12;
        }
    }
}

void Data::somarMeses(int m){
    mes += m;
    updateMes();
}

void Data::somarAno(int a){
    ano += a;
}
void Data::subDias(int d){
    dia -= d;
    updateDia();
}
void Data::subMeses(int m){
    mes -= m;
    updateMes();
}

void Data::subAno(int a){
    ano-=a;
}