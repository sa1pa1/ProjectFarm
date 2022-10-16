//Project first run 
//Equipment class

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
        // string function;

    public: 
        Equipment(int Util_lvl, double Util_boost):
       util_lvl(Util_lvl), util_boost(Util_boost){}
        Equipment(){
            // equip_name = "No name";
            util_lvl = 0;
            util_boost = 0.0;
            
        }

        //constructors 
        virtual string get_name()=0;
        virtual int get_util_lvl()=0;
        virtual double get_boost_val()=0;
        void Upgrade();
        void get_Function();


};

#endif