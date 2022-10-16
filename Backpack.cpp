#include <iostream>
#include <string>
using namespace std;
#include "Backpack.h"

//default of backpack makes 3 default equipment of watering can, fertiliser and gardening hoe; 

Backpack::Backpack(){
    contents = new Equipment[1];
    int no_items = 3;
}




