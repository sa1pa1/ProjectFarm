#ifndef FERTILISER_H
#define FERTILISER_H
#include <string>
#include <iostream>
#include "Equipment.h"
using namespace std;

class Fertiliser: public Equipment {
    protected:
        string equip_name;
        int util_lvl;
        double util_boost;
       
     
    public: 

        Fertiliser();
        void get_Function();
        void Upgrade();
        int get_util_lvl();
        double get_boost_val();
        string get_name();

};

#endif