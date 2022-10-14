// tests for the functionality of the Carrot class
// testing for functions plantCrop, isCropReady, add_harvested_crop

#include <iostream>

#include "Item.h"
#include "Carrot.h"
#include "Vegetable.h"
using namespace std;

int main() {
  Carrot plant_slot_1;
  plant_slot_1.plantCrop(5);
  bool check = plant_slot_1.isCropReady(150);
  plant_slot_1.add_harvested_crop(check);
  cout << "Test 1" << endl;
  cout << "Total # in inventory: " << plant_slot_1.inspect_veg() << endl;
  cout << endl;

  Carrot plant_slot_2;
  plant_slot_2.plantCrop(1);
  bool check2 = plant_slot_2.isCropReady(149);
  plant_slot_2.add_harvested_crop(check2);
  cout << "Test 2" << endl;
  cout << "Total # in inventory: " << plant_slot_2.inspect_veg() << endl;
  cout << endl;

  Carrot plant_slot_3;
  plant_slot_3.plantCrop(1);
  bool check3 = plant_slot_3.isCropReady(151);
  plant_slot_3.add_harvested_crop(check3);
  cout << "Test 3" << endl;
  cout << "Total # in inventory: " << plant_slot_3.inspect_veg() << endl;
  cout << endl;

  Carrot plant_slot_4;
  plant_slot_4.plantCrop(-100);
  bool check4 = plant_slot_4.isCropReady(150);
  plant_slot_4.add_harvested_crop(check4);
  cout << "Test 4" << endl;
  cout << "Total # in inventory: " << plant_slot_4.inspect_veg() << endl;
  cout << endl;

  Carrot plant_slot_5;
  plant_slot_5.plantCrop(1000);
  bool check5 = plant_slot_5.isCropReady(-1000);
  plant_slot_5.add_harvested_crop(check5);
  cout << "Test 5" << endl;
  cout << "Total # in inventory: " << plant_slot_5.inspect_veg() << endl;
  cout << endl;
}
