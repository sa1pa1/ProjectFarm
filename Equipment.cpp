#include <iostream>
#include <string>
using namespace std;
#include "Equipment.h"
#include "GardeningHoe.h"
#include "WateringCan.h"
#include "Fertiliser.h"


//default of any equipment 

Equipment::Equipment(){
    GardeningHoe();
    Fertiliser();
    WateringCan();

}


