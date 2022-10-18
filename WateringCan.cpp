/*
 * Implementation of the watering can class
 *
 * This file creates and initialises the equipment subclass: watering can
 * It initialises all of the data members in the watering can class and implements
 * its function members.
 *
 * To start the game, the user has a level 1 watering can in their inventory.
 * watering can can be upgraded to improve growth time.
 * The upgrade can be bought for 100 coins for lvl 2 and 200 for lvl 3.
 */
#include "WateringCan.h"

#include <iostream>
#include <string>
using namespace std;

// default watering can level. As player start with Wateringcan of level 1.
WateringCan::WateringCan() {
  equip_name = "Watering Can";
  util_boost = 1; // The multiplier for growth time
  util_lvl = 1; // upgrade level
  equip_value = 100; // The value of the equipment increases as you upgrade
}

// returns a short description with multiplier value depending on the upgrade
// level of the watering can
void WateringCan::get_Function() {
  if (util_lvl == 1) {
    cout << "Watering can of level " << get_util_lvl()
         << ". No reduced growth time." << endl;
  }
  if (util_lvl == 2) {
    cout << "Watering can of level " << get_util_lvl()
         << " reduce growth time by 2.00x" << endl;
  }
  if (util_lvl == 3) {
    cout << "Watering can of level " << get_util_lvl()
         << " reduce growth time by 4.00x" << endl;
  }
}

// upgrade function to determine what level the watering can is
void WateringCan::Upgrade() {
  if (util_lvl < 3) {
    util_lvl = util_lvl + 1;
    util_boost = 2;
    equip_value = 100;
  }

  if (util_lvl == 3) {
    cout << "Maximum utility level reached" << endl;
    util_lvl = 3;
    util_boost = 4;
    equip_value = 200;
  }
}

// returns watering can upgrade level
int WateringCan::get_util_lvl() { return util_lvl; }
// returns watering can name
string WateringCan::get_name() { return equip_name; }
// returns watering can multiplier
int WateringCan::get_boost_val() { return util_boost; }
// returns watering can value
int WateringCan::get_equip_val() { return equip_value; }
