#ifndef AIRCRAFT_H
#define AIRCRAFT_H
class AirCraft{
    protected:
        int weight;                  // the weight of AirCraft
        float fuel;                  // fuel percentage, initially 100%
        int numberOfFlights;
    public:
    AirCraft();
    AirCraft(int w);             // creates an Aircraft with weight w
    void refuel();               // Resets fuel back to 100%
    virtual void fly(int headwind, int minutes); // headwind in km/h and minutes (time flying)
    int get_weight();
    int get_numberOfFlights();
    float get_fuel();
    void set_weight(int Weight);
    void set_numberOfFlights(int numberofflights);
    void set_fuel(float Fuel);
    
};
#endif