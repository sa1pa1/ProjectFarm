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

// #include <SFML/Graphics.hpp>
#include <iostream>
using namespace std;

// Default constructor for the Tomato class
Tomato::Tomato() {
  _tomato_total = 0;       // total number of tomatoes
  _num_tomato_plants = 0;  // total number of tomato plants
  _crop_name = "Tomato";
  _watering_pattern = "N/A";  // placeholder
  _crop_output = 20;          // 1 tomato plant yields 20 tomatoes
  _growth_time = 6;           // 6 days
  _crop_value = 1;            // 1 coin per tomato
}

// returns name 'Tomato'
string Tomato::getName() { return _crop_name; }

// returns Tomato's crop output
int Tomato::getOutput() { return _crop_output; }

// returns Tomato's growth time
int Tomato::getGrowthTime() { return _growth_time; }

// returns value of a single Tomato
int Tomato::getCropValue() { return _crop_value; }

// plants number of specified Tomato plants
void Tomato::plantCrop(int num_plants) {
  if (num_plants > 0) {
    _num_tomato_plants += num_plants;
  } else {
    _num_tomato_plants = 0;
  }
}

// returns true if Tomato plants are ready
bool Tomato::isCropReady(int time_since_plant) {
  if (time_since_plant >= _growth_time) {
    return true;
  } else {
    return false;
  }
}

// adds number of tomatoes yielded to total number of tomatoes
void Tomato::add_harvested_crop(bool check) {
  if (check == true) {
    _tomato_total += _num_tomato_plants * _crop_output;
  }
}

// returns number of Tomato in Inventory
int Tomato::inspect_veg() { return _tomato_total; }

// returns a copy of Tomato
Tomato* Tomato::duplicate() { return new Tomato(*this); }
