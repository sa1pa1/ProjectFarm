/**
 * Implementation of the Carrot class
 *
 * This file creates and initialises the vegetable subclass: Carrot
 * It initialises all of the data members in the Carrot class and implements
 * its function members.
 *
 * To start the game, the user has a total of 0 carrots in their inventory.
 * Each carrot plant yields 5 carrots after harvest.
 * It takes 15 days for a carrot plant to grow and each can be sold for 5 coins.
 */

#include "Carrot.h"

#include <iostream>
using namespace std;

// Default constructor for the Carrot class
Carrot::Carrot() {
  itemType = "Vegetable";
  _carrot_total = 0;       // total number of carrots
  _num_carrot_plants = 0;  // number of carrot plants
  _day_planted = 0;
  _crop_name = "Carrot";
  _crop_output = 5;   // 1 Carrot plant yields 5 carrots
  _growth_time = 15;  // 15 days
  _crop_value = 5;    // 5 coins per carrot
}

// returns name 'Carrot'
string Carrot::getName() { return _crop_name; }

// returns Carrot's crop output
int Carrot::getOutput() { return _crop_output; }

// returns number of seeds planted
int Carrot::getNumPlants() { return _num_carrot_plants; }

// set the day number that the seeds were planted on
void Carrot::setDayPlanted(int day) { _day_planted = day; }

// returns the day the seeds were planted on
int Carrot::getDayPlanted() { return _day_planted; }

// returns Carrot's growth time
int Carrot::getGrowthTime() { return _growth_time; }

// returns value of a single Carrot
int Carrot::getCropValue() { return _crop_value; }

// plants number of specified Carrot plants
void Carrot::plantCrop(int num_plants) {
  if (_num_carrot_plants != 0) {
    cout << "Can't plant. Already have carrot seeds growing."
         << "\n";
  } else {
    if (num_plants > 0 && num_plants < 11) {
      _num_carrot_plants += num_plants;
      cout << "You planted " << num_plants << " carrot seeds." << endl;
    } else if (num_plants > 10) {
      cout << "No carrot seeds planted. Max number of carrot seeds you can "
              "plant "
              "is 10."
           << "\n";
    } else {
      cout << "No carrot seeds planted. You must plant at least 1 carrot seed."
           << "\n";
    }
  }
}

// returns true if Carrot plants are ready
bool Carrot::isCropReady(int time_since_plant) {
  if (time_since_plant == _growth_time) {
    return true;
  }
  return false;
}

// adds number of Carrots yielded to total number of Carrots
void Carrot::add_harvested_crop(bool check) {
  if (check == true && _num_carrot_plants != 0) {
    _carrot_total += _num_carrot_plants * _crop_output;
    cout << "You have harvested " << _num_carrot_plants * _crop_output
         << " carrots!" << endl;
    // reset the number of plants to 0
    _num_carrot_plants = 0;
  }
}

// sells number of Carrot crop in inventory
// returns the calculated number of coins
// if inventory has no carrot, output error message
int Carrot::sellCrop() {
  int coins = 0;
  if (_carrot_total > 0) {
    cout << _carrot_total << " carrots sold!"
         << "\n";
    coins = _crop_value * _carrot_total;
    // reset carrot total
    _carrot_total = 0;
    // return number of coins to add to player's wallet
    return coins;
  } else {
    // if there are 0 carrots in inventory
    cout << "No carrots to sell."
         << "\n";
  }
  return 0;
}

// returns number of Carrot in Inventory
int Carrot::inspect_veg() { return _carrot_total; }

// returns a copy of Carrot
Carrot* Carrot::duplicate() { return new Carrot(*this); }
