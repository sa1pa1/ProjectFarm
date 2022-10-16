#include "GardeningHoe.h"
#include <string>
#include <iostream>
using namespace std;

//default of Gardening Hoe 
GardeningHoe::GardeningHoe(){
    equip_name = "Gardening Hoe";
    util_lvl = 1;
    boost = 1;
    
}

//inspection constructor 
void GardeningHoe::inspect_Function(){
    if (util_lvl == 1){
        cout<<"Gardening Hoe of level 1 boost growth output by 0.00x";
    }

    if (util_lvl == 2){
        cout<<"Gardening Hoe of level 2 boost growth output by 0.25x";
    }

    if (util_lvl == 3){
        cout<<"Gardening Hoe of level 3 boost growth output by 0.5x";
    }
}

void GardeningHoe::Upgrade(){
    if (util_lvl < 3){
        util_lvl = util_lvl + 1;
    }
    else cout<<"Maximum utility level reached"<<endl;
        util_lvl = 3;

    if (util_lvl == 2){
        boost = 1.25;
    }
    if (util_lvl == 3){
    boost = 1.5;
    }
}

int GardeningHoe::get_util_lvl(){
    return util_lvl;
}

string GardeningHoe::get_name(){
    return equip_name;
}






