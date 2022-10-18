#include "WateringCan.h"
#include <string>
#include <iostream>
using namespace std;

//default of watering can 
WateringCan::WateringCan(){
    equip_name = "Watering Can";
    util_boost = 1;
    util_lvl = 1;
    equip_value = 0;

}

void WateringCan::get_Function(){
    if (util_lvl == 1){
        cout<<"Watering can of level "<<get_util_lvl()<<" reduce growth time by 0.00x"<<endl;
    }
    if (util_lvl == 2){
         cout<<"Watering can of level "<<get_util_lvl()<<" reduce growth time by 0.25x"<<endl;
    }
    if (util_lvl == 3){
         cout<<"Watering can of level "<<get_util_lvl()<<" reduce growth time by 0.5x"<<endl;
    }

}

void WateringCan::Upgrade(){
    if (util_lvl < 3){
    util_lvl = util_lvl + 1;
    util_boost = 2;
    equip_value = 100;

    }

    if (util_lvl ==3) {
        cout<<"Maximum utility level reached"<<endl;
        util_lvl = 3;
        util_boost = 3;
        equip_value = 200;
    }
}



int WateringCan::get_util_lvl(){
    return util_lvl;
}

string WateringCan::get_name(){
    return equip_name;
}

int WateringCan::get_boost_val(){
    return util_boost;
}

int WateringCan::get_equip_val(){
    return equip_value;
}