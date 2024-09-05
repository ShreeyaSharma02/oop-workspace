#ifndef HOUSE_H
#define HOUSE_H
#include "Appliance.h"
#include<iostream>
class House: public Appliance{
    private:
        int numAppliances; // Maximum number of appliances the house can hold
        Appliance** appliances; // Array of pointers to Appliance objects
        int currentAppliances; // Current number of appliances added to the house
    public:
        House();
        House(int numappliances);
        ~House();
        bool addAppliance(Appliance* appliance); //diff new variable, Method to add an appliance to the house
        double getTotalPowerConsumption();
};
#endif