// Vegetable class header file
// Vegetable has 4 subclasses: Potato, Tomato, Cabbage and Carrot
#ifndef VEGETABLE_H
#define VEGETABLE_H

#include <iostream>

#include "Item.h"
using namespace std;

// Vegetable class is a subclass of Item
class Vegetable : public Item {
 protected:
  string _crop_name;
  string _watering_pattern;
  int _crop_output;
  int _growth_time;
  int _crop_value;
  bool _ready;

 public:
  // constructor to initialise data members in the Vegetable class
  Vegetable(string crop_name, string watering_pattern, int crop_output,
            int growth_time, int crop_value, bool ready)
      : _crop_name(crop_name),
        _watering_pattern(watering_pattern),
        _crop_output(crop_output),
        _growth_time(growth_time),
        _crop_value(crop_value),
        _ready(ready) {}

  // default constructor
  Vegetable() : Vegetable("No name", "No pattern", 0, 0, 0, false) {}

  // Functions
  // pure virtual functions
  virtual string getName() = 0;
  virtual int getOutput() = 0;
  virtual int getNumPlants() = 0;
  virtual void setDayPlanted(int day) = 0;
  virtual int getDayPlanted() = 0;
  virtual int getGrowthTime() = 0;
  virtual int getCropValue() = 0;
  virtual int inspect_veg() = 0;
  virtual void plantCrop(int num_plants) = 0;
  virtual bool isCropReady(int time_since_plant) = 0;
  virtual void add_harvested_crop(bool check) = 0;
  virtual int sellCrop() = 0;
  virtual Vegetable* duplicate() = 0;
};

#endif  // VEGETABLE_H