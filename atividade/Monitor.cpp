#include <iostream>
#include <string>
#include "Monitor.h"
using namespace std;

Monitor::Monitor(){
    
}

void Monitor::incident(){
    count++;
}

int Monitor::print(){
    cout << "Count = " << count << endl;
}