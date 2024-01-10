#include<iostream>

class Car {
public:
    virtual void GearChange() {
        std::cout << "GearChanged"<<std::endl;
    }
};

class Racecar : public  Car {
public:
    void GearChange() override {
        std::cout << "Racecar GearChanged"<<std::endl;
    }
};
int main() {
    Racecar RX;
    Car *PX = &RX;
    PX->GearChange();
}