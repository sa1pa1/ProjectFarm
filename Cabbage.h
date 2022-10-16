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
  int _day_planted;

 public:
  Cabbage();

  // Functions
  string getName();                        // overrides Vegetable::getName
  int getOutput();                         // overrides Vegetable::getOutput
  int getNumPlants();                      // overrides Vegetable::getNumPlants
  void setDayPlanted(int day);             // overrides Vegetable::setDayPlanted
  int getDayPlanted();                     // overrides Vegetable::getDayPlanted
  int getGrowthTime();                     // overrides Vegetable::getGrowthTime
  int inspect_veg();                       // overrides Vegetable::inspect_veg
  int getCropValue();                      // overrides Vegetable::getCropValue
  void plantCrop(int num_plants);          // overrides Vegetable::plantCrop
  bool isCropReady(int time_since_plant);  // overrides Vegetable::isCropReady
  void add_harvested_crop(
      bool check);  // overrides Vegetable::add_harvested_crop
  Cabbage* duplicate();
};
#endif  // CABBAGE_H
