#include "Lorry.h"

void Lorry::Car::Init(string brand, int cylinders, int power) {
    setBrand(brand);
    setCylinders(cylinders);
    setPower(power);
}

void Lorry::Car::Display() const {
    cout << "Brand: " << getBrand() << endl;
    cout << "Cylinders: " << getCylinders() << endl;
    cout << "Power: " << getPower() << endl;
}

void Lorry::Car::Read() {
    string brand;
    int cylinders, power;

    cout << "      Enter:" << endl << endl;
    cout << "Brand: "; cin >> brand;
    cout << "Number of cylinders: "; cin >> cylinders;
    cout << "Power in horsepower: "; cin >> power;

    Init(brand, cylinders, power);
}

void Lorry::Car::changeBrand() {
    string newBrand;
    cout << "Enter new brand: "; cin >> newBrand;
    setBrand(newBrand);
}

void Lorry::Car::changePower() {
    int newPower;
    cout << "Enter a new power value: "; cin >> newPower;
    setPower(newPower);
}

string Lorry::Car::toString() const {
    string cStr = to_string(this->cylinders);
    string pStr = to_string(this->power);

    return cStr + " + " + pStr;
}

const string &Lorry::Car::getBrand() const {
    return brand;
}

void Lorry::Car::setBrand(const string &brand) {
    Car::brand = brand;
}

int Lorry::Car::getCylinders() const {
    return cylinders;
}

void Lorry::Car::setCylinders(int cylinders) {
    Car::cylinders = cylinders;
}

int Lorry::Car::getPower() const {
    return power;
}

void Lorry::Car::setPower(int power) {
    Car::power = power;
}

const Lorry::Car &Lorry::getCar() const {
    return car;
}

void Lorry::setCar(const Car &car) {
    Lorry::car = car;
}

int Lorry::getPayloadCapacity() const {
    return payloadCapacity;
}

void Lorry::setPayloadCapacity(int payloadCapacity) {
    Lorry::payloadCapacity = payloadCapacity;
}

void Lorry::Init(int payloadCapacity, const Car &car) {
    setPayloadCapacity(payloadCapacity);
    setCar(car);
}

void Lorry::Read() {
    int payloadCapacity;
    Car car;
    car.Read();
    cout << "Payload capacity: "; cin >> payloadCapacity;
    cout << endl << endl;

    Init(payloadCapacity, car);
}

void Lorry::Display() const {
    car.Display();
    cout << "Payload capacity: " << getPayloadCapacity();
    cout << endl << endl;
}

void Lorry::changingValues() {
    int payloadCapacity;
    car.changeBrand();
    car.changePower();
    cout << "New payload capacity: "; cin >> payloadCapacity;
    cout << endl << endl;

    setPayloadCapacity(payloadCapacity);
}