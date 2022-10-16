
#include "WateringCan.cpp"
#include "GardeningHoe.cpp"
#include "Fertiliser.cpp"
#include "Equipment.cpp"
#include <iostream>
#include <string>
using namespace std;


int main(){
    // testing Upgrade constructor 
    Fertiliser b;
    b.inspect_Function();

    b.Upgrade();
    b.inspect_Function();

    b.Upgrade();
    b.inspect_Function();
    
    b.Upgrade();
    
    cout<<b.get_util_lvl()<<endl;

    WateringCan a;
    a.inspect_Function();

    
    GardeningHoe c;
    c.inspect_Function();
    
    Equipment s;
    
    
}