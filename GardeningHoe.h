// Gardening hoe class header file
#ifndef GARDENINGHOE_H
#define GARDENINGHOE_H
#include "Equipment.h"
#include <string>
#include <iostream>
using namespace std;

// Gardening hoe class is a subclass of Equipment
class GardeningHoe: public Equipment{
    protected:
        string equip_name;
         int util_lvl;
         double util_boost;
         int equip_value;

    public: 
    // Default Gardening hoe constructor
        GardeningHoe();
    // Functions
        void get_Function(); // overrides Equipment::get_function
        void Upgrade(); // overrides Equipment::Upgrade
        int get_util_lvl(); // overrides Equipment::get_util_lvl
        int get_boost_val(); // overrides Equipment::get_boost_val
        int get_equip_val(); // overrides Equipment::get_equip_val
        string get_name(); // overrides Equipment::get_name

};
#endif
