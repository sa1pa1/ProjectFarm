// Potato class (Vegetable subclass)

#ifndef POTATO_H
#define POTATO_H

// #include <SFML/Graphics.hpp>
#include <iostream>

#include "Vegetable.h"
using namespace std;

class Potato : public Vegetable {
 private:
  // sf::Texture potato_Texture;
  // sf::Sprite potato_Sprite;
  int _potato_total;
  int _num_potato_plants;
  int _time_since_plant;

 public:
  Potato();

  // Functions
  string getName();                        // overrides Vegetable::getName
  int getOutput();                         // overrides Vegetable::getOutput
  int getGrowthTime();                     // overrides Vegetable::getGrowthTime
  int inspect_veg();                       // overrides Vegetable::inspect_veg
  int getCropValue();                      // overrides Vegetable::getCropValue
  void plantCrop(int num_plants);          // overrides Vegetable::plantCrop
  bool isCropReady(int time_since_plant);  // overrides Vegetable::isCropReady
  void add_harvested_crop(
      bool check);  // overrides Vegetable::add_harvested_crop
  Potato* duplicate();
};
#endif  // POTATO_H