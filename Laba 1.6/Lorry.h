#pragma once
#include <iostream>
#include <string>

using namespace std;

class Lorry {
private:
    class Car {
    private:
        string brand;
        int cylinders;
        int power;

    public:
        void Init(string brand, int cylinders, int power);
        void Read();
        void Display() const;
        void changeBrand();
        void changePower();
        string toString() const;

        const string &getBrand() const;
        void setBrand(const string &brand);
        int getCylinders() const;
        void setCylinders(int cylinders);
        int getPower() const;
        void setPower(int power);
    };

    Car car;
    int payloadCapacity;

public:
    const Car &getCar() const;
    void setCar(const Car &car);
    int getPayloadCapacity() const;
    void setPayloadCapacity(int payloadCapacity);
    void Init(int payloadCapacity, const Car &car);
    void Read();
    void Display() const;
    void changingValues();
};
