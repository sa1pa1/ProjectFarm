// Tomato class (Vegetable subclass)

#ifndef TOMATO_H
#define TOMATO_H

// #include <SFML/Graphics.hpp>
#include <iostream>

#include "Vegetable.h"
using namespace std;

class Tomato : public Vegetable {
 private:
  // sf::Texture tomato_Texture;
  // sf::Sprite tomato_Sprite;
  int _tomato_total;
  int _num_tomato_plants;
  int _time_since_plant;

 public:
  Tomato();

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
  virtual Tomato* duplicate();
};
#endif  // TOMATO_H