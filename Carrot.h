// Carrot class (Vegetable subclass)

#ifndef CARROT_H
#define CARROT_H

// #include <SFML/Graphics.hpp>
#include <iostream>

#include "Vegetable.h"
using namespace std;

class Carrot : public Vegetable {
 private:
  // sf::Texture carrot_Texture;
  // sf::Sprite carrot_Sprite;
  int _carrot_total;
  int _num_carrot_plants;
  int _time_since_plant;

 public:
  Carrot();

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
  virtual Carrot* duplicate();
};
#endif  // CARROT_H