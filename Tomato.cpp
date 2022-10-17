/**
 * Implementation of the Tomato class
 *
 * This file creates and initialises the vegetable subclass: Tomato
 * It initialises all of the data members in the Tomato class and implements
 * its function members.
 *
 * To start the game, the user has a total of 0 tomatoes in their inventory.
 * Each carrot plant yields 20 tomatoes after harvest.
 * It takes 6 days for a tomato plant to grow and each can be sold for 1 coin.
 */

#include "Tomato.h"

#include <iostream>
using namespace std;

// Default constructor for the Tomato class
Tomato::Tomato() {
  itemType = "Vegetable";
  _tomato_total = 0;       // total number of tomatoes
  _num_tomato_plants = 0;  // total number of tomato plants
  _day_planted = 0;
  _crop_name = "Tomato";
  _crop_output = 20;  // 1 tomato plant yields 20 tomatoes
  _growth_time = 6;   // 6 days
  _crop_value = 1;    // 1 coin per tomato
}

// returns name 'Tomato'
string Tomato::getName() { return _crop_name; }

// returns Tomato's crop output
int Tomato::getOutput() { return _crop_output; }

// returns number of seeds planted
int Tomato::getNumPlants() { return _num_tomato_plants; }

// set the day number that the seeds were planted on
void Tomato::setDayPlanted(int day) { _day_planted = day; }

// returns the day the seeds were planted on
int Tomato::getDayPlanted() { return _day_planted; }

// returns Tomato's growth time
int Tomato::getGrowthTime() { return _growth_time; }

// returns value of a single Tomato
int Tomato::getCropValue() { return _crop_value; }

// checks if there are any tomato plants growing already
// plants number of specified Tomato plants
void Tomato::plantCrop(int num_plants) {
  if (_num_tomato_plants != 0) {
    cout << "Can't plant. Already have tomato seeds growing."
         << "\n";
  } else {
    if (num_plants > 0 && num_plants < 11) {
      _num_tomato_plants += num_plants;
      cout << "You planted " << num_plants << " tomato seeds." << endl;
    } else if (num_plants > 10) {
      cout << "No tomato seeds planted. Max number of tomato seeds you can "
              "plant "
              "is 10."
           << "\n";
    } else {
      cout << "No tomato seeds planted. You must plant at least 1 tomato seed."
           << "\n";
    }
  }
}

// returns true if Tomato plants are ready
bool Tomato::isCropReady(int time_since_plant) {
  if (time_since_plant == _growth_time) {
    return true;
  }
  return false;
}

// adds number of tomatoes yielded to total number of tomatoes
void Tomato::add_harvested_crop(bool check) {
  if (check == true && _num_tomato_plants != 0) {
    _tomato_total += _num_tomato_plants * _crop_output;
    cout << "You have harvested " << _num_tomato_plants * _crop_output
         << " tomatoes!" << endl;
    // reset the number of plants to 0
    _num_tomato_plants = 0;
  }
}

// sells number of Tomato crop in inventory
// returns the calculated number of coins
// if inventory has no tomatoes, output error message
int Tomato::sellCrop() {
  int coins = 0;
  if (_tomato_total > 0) {
    cout << _tomato_total << " tomatoes sold!"
         << "\n";
    coins = _crop_value * _tomato_total;
    // reset tomato total
    _tomato_total = 0;
    // return number of coins to add to player's wallet
    return coins;
  } else {
    // if there are 0 tomatoes in inventory
    cout << "No tomatoes to sell."
         << "\n";
  }
  return 0;
}

// returns number of Tomato in Inventory
int Tomato::inspect_veg() { return _tomato_total; }

// returns a copy of Tomato
Tomato* Tomato::duplicate() { return new Tomato(*this); }
