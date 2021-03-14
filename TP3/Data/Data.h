//CONVERTE ANO E MÊS EM DIAS, SOMA E SUBTRAI DIAS, MESES E ANOS À UMA DATA

#ifndef DATA_H
#define DATA_H

#include <iostream>
#include <string>
#include <sstream>

using namespace std; 

class Data {
	int dia,mes,ano;
	string formato;
	char separador='/'; 
public:
	Data(string formato_data, string data_inserida): formato (formato_data){
		int aux = 0;
		string Dia_aux, Mes_aux, Ano_aux;
		while ((aux<data_inserida.size()) && (data_inserida[aux] != separador)){
			Dia_aux.push_back (data_inserida[aux]);
			aux++;
		}
		dia = stoi(Dia_aux);
		aux++;

		while ( (aux<data_inserida.size()) && (data_inserida[aux] != separador)){
			Mes_aux.push_back (data_inserida[aux]);
			aux++;
		}
		mes = stoi(Mes_aux);
		aux++;
		while ( (aux<data_inserida.size()) && (data_inserida[aux] != separador)){
			Ano_aux.push_back (data_inserida[aux]);
			aux++;
		}
		ano = stoi(Ano_aux);
	};
	string getData(){
		stringstream dia_S, mes_S, ano_S;
		dia_S << dia;
		mes_S << mes;
		ano_S << ano;
		
		return dia_S.str() + "/" + mes_S.str() + "/" + ano_S.str();

	};
};

#endif