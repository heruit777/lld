// Without Strategy Pattern
#include<iostream>
using namespace std;

class Vehicle{
public:
    virtual void drive(){
        cout << "normal drive capability\n";
    }
};

class PassengerVehicle: public Vehicle{};
class OffRoadVehicle: public Vehicle{
public:
    void drive()override{
        cout << "sports vehicle capability\n";
    }
};
class SportyVehicle: public Vehicle{
public:
    void drive()override{
        cout << "sports vehilce capability\n";
    }
};
class GoodsVehicle:public Vehicle{};

int main(){

    return 0;
}