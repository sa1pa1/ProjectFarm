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

// #include <SFML/Graphics.hpp>
#include <iostream>
using namespace std;

// Default constructor for the Carrot class
Carrot::Carrot() {
  _carrot_total = 0;       // total number of carrots
  _num_carrot_plants = 0;  // number of carrot plants
  _crop_name = "Carrot";
  _watering_pattern = "N/A";  // placeholder
  _crop_output = 5;           // 1 Carrot plant yields 5 carrots
  _growth_time = 15;          // 15 days
  _crop_value = 5;            // 5 coins per carrot
}

// returns name 'Carrot'
string Carrot::getName() { return _crop_name; }

// returns Carrot's crop output
int Carrot::getOutput() { return _crop_output; }

// returns Carrot's growth time
int Carrot::getGrowthTime() { return _growth_time; }

// returns value of a single Carrot
int Carrot::getCropValue() { return _crop_value; }

// plants number of specified Carrot plants
void Carrot::plantCrop(int num_plants) {
  if (num_plants > 0) {
    _num_carrot_plants += num_plants;
  } else {
    _num_carrot_plants = 0;
  }
}

// returns true if Carrot plants are ready
bool Carrot::isCropReady(int time_since_plant) {
  if (time_since_plant >= _growth_time) {
    return true;
  } else {
    return false;
  }
}

// adds number of Carrots yielded to total number of Carrots
void Carrot::add_harvested_crop(bool check) {
  if (check == true) {
    _carrot_total += _num_carrot_plants * _crop_output;
  }
}

// returns number of Carrot in Inventory
int Carrot::inspect_veg() { return _carrot_total; }

// returns a copy of Carrot
Carrot* Carrot::duplicate() { return new Carrot(*this); }
