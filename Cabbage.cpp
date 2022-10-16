/**
 * Implementation of the Cabbage class
 *
 * This file creates and initialises the vegetable subclass: Cabbage
 * It initialises all of the data members in the Cabbage class and implements
 * its function members.
 *
 * To start the game, the user has a total of 0 cabbages in their inventory.
 * Each cabbage plant yields 1 cabbage after harvest.
 * It takes 10 days for a cabbage to grow and each can be sold for 10 coins.
 */

#include "Cabbage.h"

// #include <SFML/Graphics.hpp>
#include <iostream>
using namespace std;

// Default constructor for the Cabbage class
Cabbage::Cabbage() {
  _cabbage_total = 0;       // total number of cabbages
  _num_cabbage_plants = 0;  // number of cabbage plants
  _crop_name = "Cabbage";
  _crop_output = 1;           // 1 Cabbage plant yields 1 cabbage
  _growth_time = 10;          // 10 days
  _crop_value = 10;           // 10 coins per cabbage
}

// returns name 'Cabbage'
string Cabbage::getName() { return _crop_name; }

// returns Cabbage's crop output
int Cabbage::getOutput() { return _crop_output; }

// returns Cabbage's growth time
int Cabbage::getGrowthTime() { return _growth_time; }

// returns value of a single Cabbage
int Cabbage::getCropValue() { return _crop_value; }

// plants number of specified Cabbage plants
void Cabbage::plantCrop(int num_plants) {
  if (num_plants > 0 && num_plants < 11) {
    _num_cabbage_plants += num_plants;
    cout << "You planted " << num_plants << " cabbage seeds." << endl;
  } else if (num_plants > 10) {
    cout << "No cabbage seeds planted. Max number of cabbage seeds you can plant "
            "is 10."
         << "\n";
  } else {
    cout << "No cabbage seeds planted. You must plant at least 1 cabbage seed."
         << "\n";
  }
}

// returns true if Cabbage plants are ready
bool Cabbage::isCropReady(int time_since_plant) {
  if (time_since_plant >= _growth_time) {
    return true;
  } else {
    return false;
  }
}

// adds number of Cabbages yielded to total number of Cabbages
void Cabbage::add_harvested_crop(bool check) {
  if (check == true) {
    _cabbage_total += _num_cabbage_plants * _crop_output;
    cout << "You have harvested " << _num_cabbage_plants * _crop_output
         << " cabbages!" << endl;
  }
}

// returns number of Cabbage in Inventory
int Cabbage::inspect_veg() { return _cabbage_total; }

// returns a copy of Cabbage
Cabbage* Cabbage::duplicate() { return new Cabbage(*this); }