#ifndef ITEM_H
#define ITEM_H

// #include <SFML/Graphics.hpp>
#include <iostream>

class Item {
 public:
  // Functions
  virtual Item* duplicate() = 0;
};

#endif  // ITEM_H