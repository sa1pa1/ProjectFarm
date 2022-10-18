#include "GardeningHoe.h"
#include <string>
#include <iostream>
using namespace std;

//default of Gardening Hoe 
GardeningHoe::GardeningHoe(){
   equip_name = "Gardening Hoe";
   util_boost = 1;
   util_lvl = 1;
   equip_value = 0;
    
}

//inspection constructor 
void GardeningHoe::get_Function(){
    if (util_lvl == 1){
        cout<<"Gardening Hoe of level 1 boost growth output by 0x";
    }

    if (util_lvl == 2){
        cout<<"Gardening Hoe of level 2 boost growth output by 2x";
    }

    if (util_lvl == 3){
        cout<<"Gardening Hoe of level 3 boost growth output by 3x";
    }
}

void GardeningHoe::Upgrade(){
    if (util_lvl < 3){
    util_lvl = util_lvl + 1;
    util_boost = util_boost +1;
    equip_value = equip_value + 100;
    }
}

int GardeningHoe::get_util_lvl(){
    return util_lvl;
}

string GardeningHoe::get_name(){
    return equip_name;
}

int GardeningHoe::get_boost_val(){
    return util_boost;
}

int GardeningHoe::get_equip_val(){
    return equip_value;
}




