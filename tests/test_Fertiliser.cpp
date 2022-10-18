#include "WateringCan.cpp"
#include "GardeningHoe.cpp"
#include "Fertiliser.cpp"
#include "Equipment.h"
#include <iostream>
#include <string>
using namespace std;

int main(){

    Fertiliser a;

    cout<<a.get_name()<<endl;
    cout<<"Utility level: "<<a.get_util_lvl()<<endl;
    cout<<"Boost level: "<<a.get_boost_val()<<endl;
    cout<<"Equipment value: "<<a.get_equip_val()<<endl;
    a.get_Function();
    cout<<endl;
    cout<<endl;
    //testing first upgradde
    a.Upgrade();
    cout<<"Utility level: "<<a.get_util_lvl()<<endl;
    cout<<"Boost level: "<<a.get_boost_val()<<endl;
    cout<<"Equipment value: "<<a.get_equip_val()<<endl;
    a.get_Function();
    cout<<endl;
    cout<<endl;
    //testing second upgrade
    a.Upgrade();
    cout<<"Utility level: "<<a.get_util_lvl()<<endl;
    cout<<"Boost level: "<<a.get_boost_val()<<endl;
     cout<<"Equipment value: "<<a.get_equip_val()<<endl;
    a.get_Function();
    cout<<endl;
    cout<<endl;
    //testing boundaries
    a.Upgrade();
    cout<<"Utility level: "<<a.get_util_lvl()<<endl;
    cout<<"Boost level: "<<a.get_boost_val()<<endl;
     cout<<"Equipment value: "<<a.get_equip_val()<<endl;
    a.get_Function();
    cout<<endl;
}
    

    

    
