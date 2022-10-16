/**
 * Implementation of the Potato class
 *
 * This file creates and initialises the vegetable subclass: Potato
 * It initialises all of the data members in the Potato class and implements
 * its function members.
 *
 * To start the game, the user has a total of 0 potatoes in their inventory.
 * Each carrot plant yields 5 potatoes after harvest.
 * It takes 3 days for a potato plant to grow and each can be sold for 3 coins.
 */

#include "Potato.h"

// #include <SFML/Graphics.hpp>
#include <iostream>
using namespace std;

// Default constructor for the Potato class
Potato::Potato() {
  _potato_total = 0;       // total number of potatoes
  _num_potato_plants = 0;  // number of potato plants
  _time_since_plant = 0;
  _crop_name = "Potato";
  _crop_output = 5;  // 1 potato plant yields 5 potatoes
  _growth_time = 3;  // 3 days
  _crop_value = 3;   // 1 coin per potato
}

// returns name 'Potato'
string Potato::getName() { return _crop_name; }

// returns Potato's crop output
int Potato::getOutput() { return _crop_output; }

// returns Potato's growth time
int Potato::getGrowthTime() { return _growth_time; }

// returns value of a single Potato
int Potato::getCropValue() { return _crop_value; }

// plants number of specified potato plants
void Potato::plantCrop(int num_plants) {
  if (num_plants > 0 && num_plants < 11) {
    _num_potato_plants += num_plants;
    cout << "You planted " << num_plants << " potato seeds." << endl;
  } else if (num_plants > 10) {
    cout << "No potato seeds planted. Max number of potato seeds you can plant "
            "is 10."
         << "\n";
  } else {
    cout << "No potato seeds planted. You must plant at least 1 potato seed."
         << "\n";
  }
}

// returns true if potato plants are ready
bool Potato::isCropReady(int time_since_plant) {
  if (time_since_plant >= _growth_time) {
    return true;
  } else {
    return false;
  }
}

// adds number of potatoes yielded to total number of potatoes
void Potato::add_harvested_crop(bool check) {
  if (check == true) {
    _potato_total += _num_potato_plants * _crop_output;
    cout << "You have harvested " << _num_potato_plants * _crop_output
         << " potatoes!" << endl;
  }
}

// returns number of Potato in Inventory
int Potato::inspect_veg() { return _potato_total; }

// returns a copy of Potato
Potato* Potato::duplicate() { return new Potato(*this); }