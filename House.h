#include "Appliance.h"
#include "Fridge.h"
#include"TV.h"
#include<iostream>
class House: public Appliance{
    private:
        int numAppliances;
        Appliance** appliances;
        int currentAppliances;
    public:
        House();
        House(int numappliances);
        ~House();
        bool addAppliance(Appliance* appliance);
        double getTotalPowerConsumption() const;
};