// Cabbage class (Vegetable subclass)

#ifndef CABBAGE_H
#define CABBAGE_H

// #include <SFML/Graphics.hpp>
#include <iostream>

#include "Vegetable.h"
using namespace std;

class Cabbage : public Vegetable {
 private:
  // sf::Texture cabbage_Texture;
  // sf::Sprite cabbage_Sprite;
  int _cabbage_total;
  int _num_cabbage_plants;
  int _time_since_plant;

 public:
  Cabbage();

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
  virtual Cabbage* duplicate();
};
#endif  // CABBAGE_H
