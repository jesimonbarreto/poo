#include "Ypto.h"
#include "ExceptionPosition.h"

#include <exception>

Ypto::Ypto(){
    cout<<"Using Ypto\n";
}

void Ypto::addNumber(int num){

        numbers.push_back(num);
   
}

int Ypto::getNumberPosition(int position){
    //codificar para que primeira posição seja 1
    position--;
    int value = 0;   
        if(position>=0 && position<numbers.size()){
            value = numbers[position];
        }else{
            throw ExceptionPosition();
        }
   
    return value;
}
void Ypto::setNumPosition(int position, int value){
    //codificar para que primeira posição seja 1
    position--;
    if(position>=0 && position<numbers.size()){
        numbers[position]=value;
    }else{
        throw ExceptionPosition();
    }
}
int Ypto::soma(){
    int sum=0;
    for(int i=0;i<numbers.size();i++){
        sum+=numbers[i];
    }
    return sum;
}
int Ypto::produto(){
    int product=0;
    for(int i=0;i<numbers.size();i++){
        product*=numbers[i];
    }
    return product;
}

Ypto::~Ypto(){
    cout<<"Using Ypto Destructor\n";
}

void Ypto::printAll(){
    for(int i=0;i<numbers.size();i++){
        cout << numbers[i]<<"\n";
    }
}