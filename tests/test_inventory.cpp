// Testing the functionality of the Inventory class
#include <iostream>

#include "Cabbage.h"
#include "Carrot.h"
#include "Inventory.h"
#include "Potato.h"
#include "Tomato.h"
#include "Vegetable.h"

using namespace std;

int main() {
  // creating crop objects using vegetable subclasses and their function members
  Potato crop1;
  crop1.plantCrop(3);
  crop1.add_harvested_crop(crop1.isCropReady(100));

  Tomato crop2;
  crop2.plantCrop(5);
  crop2.add_harvested_crop(crop2.isCropReady(100));

  Cabbage crop3;
  crop3.plantCrop(10);
  crop3.add_harvested_crop(crop3.isCropReady(200));

  Carrot crop4;
  crop4.plantCrop(15);
  crop4.add_harvested_crop(crop4.isCropReady(150));

  // creating the Inventory
  Inventory test_inventory;

  // tests for Inventory size and adding crops
  cout << "Inventory size before: " << test_inventory.getSize() << endl;
  test_inventory.add_veg(&crop1);
  test_inventory.add_veg(&crop2);
  test_inventory.add_veg(&crop3);
  test_inventory.add_veg(&crop4);
  cout << "Inventory size after: " << test_inventory.getSize() << endl;
  cout << endl;

  // creates a copy of the inventory
  std::vector<Vegetable*> vec = test_inventory.getVectorCopy();

  // tests displaying the contents of inventory
  cout << "Inventory: " << endl;
  cout << "Potatoes: " << vec[0]->inspect_veg() << "\n";
  cout << "Tomatoes: " << vec[1]->inspect_veg() << "\n";
  cout << "Cabbages: " << vec[2]->inspect_veg() << "\n";
  cout << "Carrots: " << vec[3]->inspect_veg() << "\n";
}
