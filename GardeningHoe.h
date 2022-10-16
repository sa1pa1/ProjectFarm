#ifndef GARDENINGHOE_H
#define GARDENINGHOE_H
#include "Equipment.h"
#include <string>
#include <iostream>
using namespace std;


class GardeningHoe{
    protected:
        string equip_name;
         int util_lvl;
         double boost;

    public: 
        GardeningHoe();
        void inspect_Function();
        void Upgrade();
        virtual int get_util_lvl();
        virtual string get_name();

};
#endif