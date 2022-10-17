// Item class header file
#ifndef ITEM_H
#define ITEM_H

#include <iostream>

class Item {
  // Data members
 protected:
  std::string itemType;

 public:
  // Pure virtual function
  virtual Item* duplicate() = 0;
};

#endif  // ITEM_H