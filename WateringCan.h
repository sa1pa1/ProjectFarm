//class watering can

#ifndef WATERINGCAN_H
#define WATERINGCAN_H
#include <iostream>
#include <string.h>
#include "Equipment.h"
using namespace std;


class WateringCan: public Equipment{
    protected:
        string equip_name;
        double util_boost;
        int util_lvl;

    public:
        WateringCan();
        void get_Function();
        void Upgrade();
        int get_util_lvl();
        double get_boost_val();
        string get_name();
    
};
#endif