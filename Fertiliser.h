// Fertiliser class header file
#ifndef FERTILISER_H
#define FERTILISER_H
#include <string>
#include <iostream>
#include "Equipment.h"
using namespace std;

// Fertiliser class is a subclass of Equipment
class Fertiliser: public Equipment {
    protected:
        string equip_name;
        int util_lvl;
        int util_boost;
        int equip_value;
       
     
    public: 
// Default Fertiliser constructor
        Fertiliser();
    // Functions
        void get_Function(); // overrides Equipment::get_function
        void Upgrade(); // overrides Equipment::Upgrade
        int get_util_lvl(); // overrides Equipment::get_util_lvl
        int get_boost_val(); // overrides Equipment::get_boost_val
        int get_equip_val(); // overrides Equipment::get_equip_val
        string get_name(); // overrides Equipment::get_name

};

#endif
