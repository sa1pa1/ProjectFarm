// tests for the functionality of the Cabbage class
// testing for functions plantCrop, isCropReady, add_harvested_crop

#include <iostream>

#include "Item.h"
#include "Cabbage.h"
#include "Vegetable.h"
using namespace std;

int main() {
  Cabbage plant_slot_1;
  plant_slot_1.plantCrop(10);
  bool check = plant_slot_1.isCropReady(200);
  plant_slot_1.add_harvested_crop(check);
  cout << "Test 1" << endl;
  cout << "Total # in inventory: " << plant_slot_1.inspect_veg() << endl;
  cout << endl;

  Cabbage plant_slot_2;
  plant_slot_2.plantCrop(10);
  bool check2 = plant_slot_2.isCropReady(199);
  plant_slot_2.add_harvested_crop(check2);
  cout << "Test 2" << endl;
  cout << "Total # in inventory: " << plant_slot_2.inspect_veg() << endl;
  cout << endl;

  Cabbage plant_slot_3;
  plant_slot_3.plantCrop(0);
  bool check3 = plant_slot_3.isCropReady(200);
  plant_slot_3.add_harvested_crop(check3);
  cout << "Test 3" << endl;
  cout << "Total # in inventory: " << plant_slot_3.inspect_veg() << endl;
  cout << endl;

  Cabbage plant_slot_4;
  plant_slot_4.plantCrop(-100);
  bool check4 = plant_slot_4.isCropReady(200);
  plant_slot_4.add_harvested_crop(check4);
  cout << "Test 4" << endl;
  cout << "Total # in inventory: " << plant_slot_4.inspect_veg() << endl;
  cout << endl;

  Cabbage plant_slot_5;
  plant_slot_5.plantCrop(-10);
  bool check5 = plant_slot_5.isCropReady(-200);
  plant_slot_5.add_harvested_crop(check5);
  cout << "Test 5" << endl;
  cout << "Total # in inventory: " << plant_slot_5.inspect_veg() << endl;
  cout << endl;
}
