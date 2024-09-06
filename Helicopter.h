#ifndef HELICOPTER_H
#define HELICOPTER_H
#include "AirCraft.h"
#include<string>
using namespace std;
class Helicopter: public AirCraft{
    protected:
        string name;
    public:
        Helicopter();
        Helicopter(int w, string n);     // creates a Helicopter with weight w and name n
        void set_name(string name);
        string get_name();
        void fly(int headwind, int minutes);
};
#endif