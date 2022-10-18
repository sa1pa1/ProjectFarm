#include <iostream>
#include <string>
using namespace std;
#include "Backpack.h"

Backpack::Backpack(){
    
    WateringCan();
    Fertiliser();
    GardeningHoe();

}


Equipment* Backpack::get_contents(){
    return contents;
}





