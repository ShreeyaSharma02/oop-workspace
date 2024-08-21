#include "Orchestra.h"
#include<string>
#include <iostream>
using namespace std;
Orchestra::Orchestra(){
    size = 0;
    

}
Orchestra::Orchestra(int size){
    this->size=size;
    this->musician_array = new Musician[size];

}
int Orchestra::get_current_number_of_members(){
    int curr_members = 0;
    for(int i = 0; i<size; i++){
        if(musician_array[i].get_instrument()!="null"){
            curr_members= curr_members + 1;
        }
    }
    return curr_members;
}
bool Orchestra::has_instrument(std::string instrument1){
    // this->instrument=instrument1;
    for (int i=0;i<size;i++){
        if(musician_array[i].get_instrument() == instrument1);
        return true;
    }
    return false;
}
Musician * Orchestra::get_members(){
    return musician_array;
}
bool Orchestra::add_musician(Musician new_musician1){
    // curr_members = get_current_number_of_members
    for(int i = 0; i<size; i++){
        // cout << "in for loop,i = " << i << endl;
        if(musician_array[i].get_instrument()=="null"){
            // cout << "in if loop" << endl;
            musician_array[i] = new_musician1;
            return true;
        }
    }
    return false;
}

Orchestra:: ~Orchestra(){
    delete[] musician_array;
}