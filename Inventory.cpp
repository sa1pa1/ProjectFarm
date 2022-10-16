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
  max_num_items = 4;
  veg_vector.reserve(max_num_items);  // empty vector with space for 4 pointers
}

// Functions
// clears all items in the vegetable vector
void Inventory::clearItems() { veg_vector.clear(); }

// add vegetable to the vegetable vector
void Inventory::add_veg(Vegetable* crop) { veg_vector.push_back(crop); }

// clear a singular slot in the vegetable vector
void Inventory::remove_item(int slot_num) {
  veg_vector.insert(veg_vector.begin() + slot_num, 0);
}

// return current number of vegetables in vegetable vector
int Inventory::getSize() { return veg_vector.size(); }

// returns a copy of the entire vector and its contents
std::vector<Vegetable*> Inventory::getVectorCopy() { return veg_vector; }
