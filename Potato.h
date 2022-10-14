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
  virtual string getName();                // overrides Vegetable::getName
  virtual int getOutput();                 // overrides Vegetable::getOutput
  virtual int getGrowthTime();             // overrides Vegetable::getGrowthTime
  virtual int inspect_veg();               // overrides Vegetable::inspect_veg
  virtual int getCropValue();              // overrides Vegetable::getCropValue
  virtual void plantCrop(int num_plants);  // overrides Vegetable::plantCrop
  virtual bool isCropReady(
      int time_since_plant);  // overrides Vegetable::isCropReady
  virtual void add_harvested_crop(
      bool check);  // overrides Vegetable::add_harvested_crop
  virtual Potato* duplicate();
};
#endif  // POTATO_H