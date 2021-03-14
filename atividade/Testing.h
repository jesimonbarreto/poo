#include <iostream>
#include <string>
using namespace std;

class Testing {
    private:
        static int count;
        string name;
 
    public:
        Testing() {
            ++count;
        };
 
        static int getValue() {
            return count;
        };
};