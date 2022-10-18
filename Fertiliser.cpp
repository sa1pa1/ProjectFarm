/**
 * Implementation of the Fertiliser class
 *
 * This file creates and initialises the equipment subclass: Fertiliser
 * It initialises all of the data members in the Fertiliser class and implements
 * its function members.
 *
 * To start the game, the user has a level 1 fertiliser in their inventory.
 * Fertiliser can be upgraded to improve crop output.
 * The upgrade can be bought for 100 coins for lvl 2 and 200 for lvl 3.
 */
#include "Fertiliser.h"

#include <iostream>
#include <string>
using namespace std;

// default fertiliser level. As player start with Fertiliser of level 1.

Fertiliser::Fertiliser() {
  equip_name = "Fertiliser";
  util_lvl = 1;       // upgrade level
  util_boost = 1;     // The multiplier for crop output
  equip_value = 100;  // The value of the equipment increases as you upgrade
}

// returns a short description with multiplier value depending on the upgrade
// level of the fertiliser
void Fertiliser::get_Function() {
  if (util_lvl == 1) {
    cout << "Fertiliser of level 1. No boost in crop value" << endl;
  }
  if (util_lvl == 2) {
    cout << "Fertiliser of level 2 help boost crop value by 2x" << endl;
  }
  if (util_lvl == 3) {
    cout << "Fertiliser of level 3 help boost crop value by 3x" << endl;
  }
}

// upgrade function to determine what level the fertiliser is
void Fertiliser::Upgrade() {
  if (util_lvl < 3) {
    util_lvl = util_lvl + 1;
    util_boost = 2;
    equip_value = 100;
  }
  if (util_lvl == 3) {
    cout << "Maximum utility level reached" << endl;
    util_lvl = 3;
    util_boost = 3;
    equip_value = 200;
  }
}

// returns fertiliser upgrade level
int Fertiliser::get_util_lvl() { return util_lvl; }
// returns fertilisers name
string Fertiliser::get_name() { return equip_name; }
// returns fertilisers multiplier
int Fertiliser::get_boost_val() { return util_boost; }
// returns fertilisers value
int Fertiliser::get_equip_val() { return equip_value; }
