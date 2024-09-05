#ifndef ELECTRONICDEVICE_H
#define ELECTRONICDEVICE_H
class ElectronicDevice{
    protected:
        int batteryCapacity;
        bool isOn;
    public:
        ElectronicDevice(); 
        ElectronicDevice(int batteryCapacity); // creates an ElectronicDevice with a battery capacity
        virtual ~ElectronicDevice() = default;
        int get_batteryCapacity() const;
        void set_batteryCapacity(int batteryCapacity);
        void turnOn();
        void turnOff();
        bool get_isOn() const;
        virtual double getBatteryConsumption();
};
#endif