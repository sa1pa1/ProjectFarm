#ifndef FERTILISER_H
#define FERTILISER_H
#include <string>
#include <iostream>
#include "Equipment.h"
using namespace std;

class Fertiliser {
    protected:
        string equip_name;
        
        double boost;
     
    public: 
        int util_lvl;
        Fertiliser();
        void inspect_Function();
        void Upgrade();
        virtual int get_util_lvl();
        virtual string get_name();


};

#endif