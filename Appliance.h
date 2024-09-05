#ifndef APPLIANCE_H
#define APPLIANCE_H
class Appliance{
    protected:
        int powerRating;
        bool isOn;
        double powerconsumption;
    public:
        Appliance();
        Appliance(int powerrating);
        void set_powerRating(int powerrating);
        int get_powerRating()const;
        void set_isOn(bool ison);
        bool get_isOn() const;
        void turnOn();
        void turnOff();
        virtual double getpowerconsumption();
};
// we use h file to define the signatures that we will use in the cpp file
#endif