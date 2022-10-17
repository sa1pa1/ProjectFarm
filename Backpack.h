#ifndef BACKPACK_H
#define BACKPACK_H
#include "WateringCan.h"
#include "GardeningHoe.h"
#include "Fertiliser.h"
#include "Equipment.h"


#include <iostream>
#include <string> 
using namespace std;

class Backpack: public WateringCan, public GardeningHoe, public Fertiliser{

    private:
        Equipment* contents;
        int curr_equip_num;
    public: 

        Backpack();
        void inspect_equipment(int n);
        Equipment* get_contents();
        



};

#endif