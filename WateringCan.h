//class watering can

#ifndef WATERINGCAN_H
#define WATERINGCAN_H
#include <iostream>
#include <string.h>
#include "Equipment.h"
using namespace std;


class WateringCan{
    protected:
        string equip_name;
        double boost;

    public:
        int util_lvl;
        WateringCan();
        void inspect_Function();
        void Upgrade();
        virtual int get_util_lvl();
        virtual string get_name();

        
    
};
#endif