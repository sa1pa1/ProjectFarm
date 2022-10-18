// watering can class header file

#ifndef WATERINGCAN_H
#define WATERINGCAN_H
#include <iostream>
#include <string.h>
#include "Equipment.h"
using namespace std;

// watering can class is a subclass of Equipment
class WateringCan: public Equipment{
    protected:
        string equip_name;
        int util_boost;
        int util_lvl;
        int equip_value;
    

    public:
    // Default watering can constructor
        WateringCan();
        // Functions
        void get_Function(); // overrides Equipment::get_function
        void Upgrade(); // overrides Equipment::Upgrade
        int get_util_lvl(); // overrides Equipment::get_util_lvl
        int get_boost_val(); // overrides Equipment::get_boost_val
        int get_equip_val(); // overrides Equipment::get_equip_val
        string get_name(); // overrides Equipment::get_name
    
};
#endif
