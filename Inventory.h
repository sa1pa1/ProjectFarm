#ifndef INVENTORY_H
#define INVENTORY_H
#include <vector>

#include "Vegetable.h"

class Inventory {
 protected:
  std::vector<Vegetable*> veg_vector;
  int current_num_items;
  int max_num_items;

 public:
  // constructor and destructor
  Inventory();
  // ~Inventory();

  // Functions
  void clearItems();
  void add_veg(Vegetable* crop);
  void remove_item(int slot_num);
  int getSize();
  std::vector<Vegetable*> getVectorCopy();
  void printVector();
};

#endif  // INVENTORY_H