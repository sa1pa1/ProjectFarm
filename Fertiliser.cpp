#include "Fertiliser.h"
#include <string>
#include <iostream>
using namespace std;


//default fertiliser level 
Fertiliser::Fertiliser(){

    equip_name = "Fertiliser";
    util_lvl = 1;
    boost = 1;
}

void Fertiliser::inspect_Function(){
    if (util_lvl == 1){
        cout<<"Fertiliser of level "<<get_util_lvl()<<" help boost crop value by 0.00x"<<endl;
    }
    if (util_lvl == 2){
        cout<<"Fertiliser of level "<<get_util_lvl()<<" help boost crop value by 0.05x"<<endl;
    }
    if (util_lvl == 3){
        cout<<"Fertiliser of level "<<get_util_lvl()<<" help boost crop value by 0.25x"<<endl;
    }
}

void Fertiliser::Upgrade(){
    if (util_lvl < 3){
    util_lvl = util_lvl + 1;
    }
    else cout<<"Maximum utility level reached"<<endl;
        util_lvl = 3;

    if (util_lvl == 2){
        boost = 1.05;
    }
    if (util_lvl == 3){
        boost = 1.25;
    }

    
}

int Fertiliser::get_util_lvl(){
    return util_lvl;
}

string Fertiliser::get_name(){
    return equip_name;
}


