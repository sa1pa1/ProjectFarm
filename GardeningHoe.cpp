/**
 * Implementation of the gardening hoe class
 *
 * This file creates and initialises the equipment subclass: gardening hoe
 * It initialises all of the data members in the gardening hoe class and implements
 * its function members.
 *
 * To start the game, the user has a level 1 gardening hoe in their inventory.
 * gardening hoe can be upgraded to improve crop output.
 * The upgrade can be bought for 100 coins for lvl 2 and 200 for lvl 3.
 */
#include "GardeningHoe.h"

#include <iostream>
#include <string>
using namespace std;

// default of Gardening Hoe
GardeningHoe::GardeningHoe() {
  equip_name = "Gardening Hoe";
  util_boost = 1; // The multiplier for crop output 
  util_lvl = 1; //  upgrade level
  equip_value = 100; // equipment value
}

// inspection constructor
// returns a short description with multiplier value depending on the upgrade
// level of the gardening hoe
void GardeningHoe::get_Function() {
  if (util_lvl == 1) {
    cout << "Gardening Hoe of level 1. No boost in crop output";
  }

  if (util_lvl == 2) {
    cout << "Gardening Hoe of level 2 boost crop output by 2x";
  }

  if (util_lvl == 3) {
    cout << "Gardening Hoe of level 3 boost crop output by 3x";
  }
}

// upgrade function to determine what level the gardening hoe is
void GardeningHoe::Upgrade() {
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

// returns gardening hoe upgrade level
int GardeningHoe::get_util_lvl() { return util_lvl; }
// returns gardening hoe name
string GardeningHoe::get_name() { return equip_name; }
// returns gardening hoe multiplier
int GardeningHoe::get_boost_val() { return util_boost; }
// returns gardening hoe value
int GardeningHoe::get_equip_val() { return equip_value; }
