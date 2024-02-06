#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Vehicle{
public:
    virtual int getNumberOfWheels(){
        return 2;
    }
};

class EngineVehicle: public Vehicle{
    public:
    virtual int hasEngine(){
        return true;
    }
};

class MotorCycle: public EngineVehicle{};

class Car: public EngineVehicle{
public:
    int getNumberOfWheels(){
        return 4;
    }
};

class Bicycle: public Vehicle{};

int main(){
    vector<Vehicle*> varr;
    varr.push_back(new MotorCycle());
    varr.push_back(new Car());
    varr.push_back(new Bicycle());
    
    for(auto &i : varr){
        cout << i->getNumberOfWheels() << endl;
    }
    return 0;
}