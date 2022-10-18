#include "Fertiliser.h"
#include <string>
#include <iostream>
using namespace std;


//default fertiliser level. As player start with Fertiliser of level 1. 

Fertiliser::Fertiliser(){
    equip_name = "Fertiliser";
    util_lvl = 1;
    util_boost = 1;
}


void Fertiliser::get_Function(){
    if (util_lvl == 1){
       cout<<"Fertiliser of level 1 help boost crop value by 0.00x"<<endl;
        
    }
    if (util_lvl == 2){
       cout<<"Fertiliser of level 2 help boost crop value by 2x"<<endl;
        
    }
    if (util_lvl == 3){
        cout<<"Fertiliser of level 3 help boost crop value by 3x"<<endl;
      
    }
}

void Fertiliser::Upgrade(){
    if (util_lvl < 3){
    util_lvl = util_lvl + 1;
    util_boost = 2;
    }

    if (util_lvl ==3) {
        cout<<"Maximum utility level reached"<<endl;
        util_lvl = 3;
        util_boost = 3;
    }
}

int Fertiliser::get_util_lvl(){
    return util_lvl;
}
string Fertiliser::get_name(){
    return equip_name;
}
int Fertiliser::get_boost_val(){
    return util_boost;
}


