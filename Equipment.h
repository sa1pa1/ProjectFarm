// Equipment class header file
// Equipment has 3 subclasses: Watering can, gardening hoe and fertiliser

#ifndef EQUIPMENT_H
#define EQUIPMENT_H
#include <iostream>
#include <string>
using namespace std;

class Equipment {   
    protected: 
        string equip_name;
        int util_lvl;
        double util_boost;
        int equip_value;

     // constructor to initialise data members in the Equipment class
    public: 
        Equipment(int Util_lvl, double Util_boost):
       util_lvl(Util_lvl), util_boost(Util_boost){}
        Equipment(){
            equip_name = "";
            util_lvl = 0;
            util_boost = 0;
            
        }

        // Functions
        // pure virtual functions
        virtual string get_name()=0;
        virtual int get_util_lvl()=0;
        virtual int get_boost_val()=0;
        virtual int get_equip_val()=0;
        void Upgrade();
        void get_Function();
        

};

#endif
