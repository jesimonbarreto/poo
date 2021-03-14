#include <iostream>
#include "Monitor.h"
using namespace std;

int Monitor::count = 0;
 
int main(int argc, char** argv) {

    Monitor::incident();
    Monitor::print();
    Monitor::incident();
    Monitor::incident();
    Monitor::incident();
    Monitor::print();
    Monitor m;
    m.print();
    
    return 0;
}