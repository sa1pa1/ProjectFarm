#ifndef GARDENINGHOE_H
#define GARDENINGHOE_H
#include "Equipment.h"
#include <string>
#include <iostream>
using namespace std;


class GardeningHoe: public Equipment{
    protected:
        string equip_name;
         int util_lvl;
         double util_boost;
         int equip_value;

    public: 
        GardeningHoe();
        void get_Function();
        void Upgrade();
        int get_util_lvl();
        int get_boost_val();
        int get_equip_val();
        string get_name();

};
#endif