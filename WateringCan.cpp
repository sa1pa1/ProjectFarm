#include "WateringCan.h"
#include <string>
#include <iostream>
using namespace std;

//default of watering can 
WateringCan::WateringCan(){
    equip_name = "Watering Can";
    util_boost = 1;
    util_lvl = 1;

}

void WateringCan::get_Function(){
    if (util_lvl == 1){
        cout<<"Watering can of level "<<get_util_lvl()<<"reduce growth time by 0.00x"<<endl;
    }
    if (util_lvl == 2){
         cout<<"Watering can of level "<<get_util_lvl()<<"reduce growth time by 0.25x"<<endl;
    }
    if (util_lvl == 3){
         cout<<"Watering can of level "<<get_util_lvl()<<"reduce growth time by 0.5x"<<endl;
    }

}

void WateringCan::Upgrade(){
    if (util_lvl < 3){
        util_lvl = util_lvl + 1;
    }
    else cout<<"Maximum utility level reached"<<endl;
        util_lvl = 3;

    if (util_lvl == 2){
        util_boost = 0.85;
    }
    if (util_lvl == 3){
        util_boost = 0.75;
    }

}

int WateringCan::get_util_lvl(){
    return util_lvl;
}

string WateringCan::get_name(){
    return equip_name;
}

double WateringCan::get_boost_val(){
    return util_boost;
}