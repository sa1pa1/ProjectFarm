#include <iostream>
#include <string>
using namespace std;
#include "Backpack.h"

//default of backpack makes 3 default equipment of watering can, fertiliser and gardening hoe; 
// item_1 = new WateringCan();
// item_2 = new Fertiliser();
// item_3 = new GardeningHoe();

Backpack::Backpack(){
    contents = new Equipment[3];
    // Equipment[1] = WateringCan();
    // Equipment[2] = GardeningHoe();
    // Equipment[3] = Fertiliser();
}



Equipment* Backpack::get_contents(){
    return contents;
}





