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
         int util_boost;

    public: 
        GardeningHoe();
        void get_Function();
        void Upgrade();
        int get_util_lvl();
        int get_boost_val();
        string get_name();

};
#endif