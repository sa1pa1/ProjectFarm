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

#include <iostream>
using namespace std;

// Default constructor for the Potato class
Potato::Potato() {
  itemType = "Vegetable";
  _potato_total = 0;       // total number of potatoes
  _num_potato_plants = 0;  // number of potato plants
  _day_planted = 0;
  _time_since_plant = 0;
  _crop_name = "Potato";
  _crop_output = 5;  // 1 potato plant yields 5 potatoes
  _growth_time = 4;  // 4 days
  _crop_value = 3;   // 1 coin per potato
}

// returns name 'Potato'
string Potato::getName() { return _crop_name; }

// returns Potato's crop output
int Potato::getOutput() { return _crop_output; }

// returns number of seeds planted
int Potato::getNumPlants() { return _num_potato_plants; }

// set the day number that the seeds were planted on
void Potato::setDayPlanted(int day) { _day_planted = day; }

// returns the day the seeds were planted on
int Potato::getDayPlanted() { return _day_planted; }

// returns Potato's growth time
int Potato::getGrowthTime() { return _growth_time; }

// returns value of a single Potato
int Potato::getCropValue() { return _crop_value; }

// checks if there are any potato plants growing already
// plants number of specified potato plants
void Potato::plantCrop(int num_plants) {
  if (_num_potato_plants != 0) {
    cout << "Can't plant. Already have potato seeds growing."
         << "\n";
  } else {
    if (num_plants > 0 && num_plants < 11) {
      _num_potato_plants += num_plants;
      cout << "You planted " << num_plants << " potato seeds." << endl;
    } else if (num_plants > 10) {
      cout << "No potato seeds planted. Max number of potato seeds you can "
              "plant "
              "is 10."
           << "\n";
    } else {
      cout << "No potato seeds planted. You must plant at least 1 potato seed."
           << "\n";
    }
  }
}

// returns true if potato plants are ready
bool Potato::isCropReady(int time_since_plant) {
  if (_num_potato_plants > 0) {
    if (time_since_plant >= _growth_time) {
      return true;
    }
  }
  return false;
}

// adds number of potatoes yielded to total number of potatoes
void Potato::add_harvested_crop(int multiplier, bool check) {
  if (check == true && _num_potato_plants != 0) {
    _potato_total += multiplier * _num_potato_plants * _crop_output;
    cout << "You have harvested "
         << multiplier * _num_potato_plants * _crop_output << " potatoes!"
         << endl;
    cout << "\n";
    // reset the number of plants to 0
    _num_potato_plants = 0;
  }
}

// sells number of Potato crop in inventory
// returns the calculated number of coins
// if inventory has no potatoes, output error message
int Potato::sellCrop() {
  int coins = 0;
  if (_potato_total > 0) {
    cout << _potato_total << " potatoes sold!"
         << "\n";
    coins = _crop_value * _potato_total;
    // reset potato total
    _potato_total = 0;
    // return number of coins to add to player's wallet
    return coins;
  } else {
    // if there are 0 potatoes in inventory
    cout << "No potatoes to sell."
         << "\n";
  }
  return 0;
}

// returns number of Potato in Inventory
int Potato::inspect_veg() { return _potato_total; }

// returns a copy of Potato
Potato* Potato::duplicate() { return new Potato(*this); }