#include "Musician.h"
#include<string.h>
using namespace std;

Musician::Musician(){
    this->instrument="null";
    this->experience=0;
}


Musician::Musician(std::string inst, int exp){
    this->instrument=inst;
    this->experience=exp;
}

string Musician::get_instrument(){
    return instrument;
}

int Musician::get_experience() {
    return experience;
}