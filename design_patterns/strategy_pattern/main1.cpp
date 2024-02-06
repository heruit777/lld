#include<iostream>
using namespace std;

// abstract class or interface.
class DriveStrategy{
public:
    virtual void drive() = 0;
};

class NormalDriveStrategy: public DriveStrategy{
public:
    void drive() override {
        cout << "Normal drive cap.\n";
    }
};

class SportsDriveStrategy: public DriveStrategy{
public:
    void drive() override {
        cout << "Sports drive cap.\n";
    }
};

class Vehicle{
    DriveStrategy *driveObject;
public:
    // this is know as constructor injection
    Vehicle(DriveStrategy *driveObject){
        this->driveObject = driveObject;
    }

    void drive(){
        driveObject->drive();
    }
};

class PassengerVehicle: public Vehicle{
public:
    // initialization list
    PassengerVehicle(): Vehicle(new NormalDriveStrategy()){}
};
class OffRoadVehicle: public Vehicle{
public:
    OffRoadVehicle(): Vehicle(new SportsDriveStrategy()){}
};
class SportyVehicle: public Vehicle{
public:
    SportyVehicle(): Vehicle(new SportsDriveStrategy()){}
};
class GoodsVehicle:public Vehicle{
    public:
    GoodsVehicle(): Vehicle(new NormalDriveStrategy()){}
};

int main(){
    Vehicle *v1 = new SportyVehicle();
    v1->drive();
    return 0;
}