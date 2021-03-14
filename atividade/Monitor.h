#include <iostream>
#include <string>
using namespace std;

class Monitor {
    private:
        static int count;
        string name;
 
    public:
        Monitor();
        static void incident();
        static int print();
};