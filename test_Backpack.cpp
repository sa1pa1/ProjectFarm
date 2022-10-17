//testing Backpack class 
#include "WateringCan.cpp"
#include "GardeningHoe.cpp"
#include "Fertiliser.cpp"
#include "Equipment.h"
#include "Backpack.h"
#include <iostream>
#include <string>
using namespace std;

int main(){

    Backpack s;
    Equipment* s_contents = s.get_contents();
    
    cout<<s_contents->get_boost_val();

    
}
