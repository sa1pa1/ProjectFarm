// // Inventory destructor
#include "Inventory.h"
#include <iostream>

// Inventory constructor
Inventory::Inventory()
{
  max_num_items = 4;
  veg_vector.reserve(max_num_items); // empty vector with space for 4 pointers
  
}

// Functions
// clears all items in the vegetable vector
void Inventory::clearItems() 
{
  veg_vector.clear();
}

// add vegetable to the vegetable vector
void Inventory::add_veg(Vegetable* crop)
{
  veg_vector.push_back(crop);
}

// clear a singular slot in the vegetable vector
void Inventory::remove_item(int slot_num)
{
  veg_vector.insert(veg_vector.begin() + slot_num, 0);
}

// return current number of vegetables in vegetable vector
int Inventory::getSize()
{
  return veg_vector.size();
}

std::vector<Vegetable*> Inventory::getVectorCopy()
{
  return veg_vector;
}
