/**
 * Implementation of the Inventory class
 *
 * Inventory class has data members max_num_items which specifies the maximum
 * number of vegetables the user's inventory can hold at any given time and is
 * initialised to 4. Another data member 'veg_vector' stores the vegetables and
 * is initialised to 4 empty slots to start the game.
 */

#include "Inventory.h"

#include <iostream>

// Inventory constructor
Inventory::Inventory() {
  veg_vector.reserve(1);  // intialising inventory with 1 space
  current_num_items = 0;
}

// Functions
// clears all items in the vegetable vector
void Inventory::clearItems() { veg_vector.clear(); }

// add vegetable to the vegetable vector
void Inventory::add_veg(Vegetable* crop) { 
  
  // If we are not adding the first item in the inventory
  if (current_num_items >= 1){

    // Allocate space for the current inventory, copy it to a temp, and reserve space for the inventory + new item
    temp_vector.reserve(current_num_items);
    temp_vector = veg_vector;
    veg_vector.reserve(current_num_items+1);
    veg_vector = temp_vector;
    veg_vector.push_back(crop);
  } else {
    veg_vector.push_back(crop);
  }
  current_num_items += 1;
}

// clear a singular slot in the vegetable vector
void Inventory::remove_item(int slot_num) {
  veg_vector.insert(veg_vector.begin() + slot_num, 0);
}

// return current number of vegetables in vegetable vector
int Inventory::getSize() { return veg_vector.size(); }

// returns a copy of the entire vector and its contents
std::vector<Vegetable*> Inventory::getVectorCopy() { return veg_vector; }
