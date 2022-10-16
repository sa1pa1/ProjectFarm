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
  int _day_planted;

 public:
  Carrot();

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
  Carrot* duplicate();
};
#endif  // CARROT_H