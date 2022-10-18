// compile with:
// g++ Player.h Inventory.h Potato.h Tomato.h Cabbage.h Carrot.h Player.cpp
// Inventory.cpp Potato.cpp Tomato.cpp Cabbage.cpp Carrot.cpp main.cpp -o main

// enter -100 to exit game loop

// what works right now:
// planting/harvesting crops
// selling crops
// inspect vegetables
// inspect wallet
// Go to next day

// need to add:
// equipment functionality (main switch case 2)
// inspect equipment       (main switch case 5)
// instructions            (start of the game, after user's name is entered)
// save file

#include <iostream>
#include <string>
#include <vector>

#include "Cabbage.h"
#include "Carrot.h"
#include "Inventory.h"
#include "Item.h"
#include "Player.h"
#include "Potato.h"
#include "Tomato.h"
#include "Vegetable.h"
#include "Equipment.h"
#include "GardeningHoe.h"
#include "Fertiliser.h"
#include "WateringCan.h"

using namespace std;

int main(int argc, char *argv[]) {
  // Welcome message
  cout << "\n";
  cout << "--------------------------------------------------------------------"
          "-------------------------"
       << "\n";
  cout << "                                   Welcome to COIN FARM"
       << "\n";
  cout << "--------------------------------------------------------------------"
          "-------------------------"
       << "\n";
  cout << "A text-based farming simulator game!"
       << "\n";
  cout << "\n";

  // create equipment objects 
     WateringCan w;
     Fertiliser f;
     GardeningHoe g;

  // Create vegetable crop objects
  Potato pCrop;
  Tomato tCrop;
  Cabbage cbgCrop;
  Carrot crtCrop;

  // Create player and inventory objects for the user
  Player user;
  Inventory crop_inventory;

  // initialise inventory with vegetable objects
  crop_inventory.add_veg(&pCrop);
  crop_inventory.add_veg(&tCrop);
  crop_inventory.add_veg(&cbgCrop);
  crop_inventory.add_veg(&crtCrop);

  // Day counter
  int day = 1;

  // Ask user for their name
  string name;
  cout << "Enter your name: ";
  cin >> name;
  cout << "\n";

  // Instructions
  cout << "Hi " << name << "! Here are the instructions on how to play..."
       << "\n";

  // *** enter complete instructions here ***

  // enter -100 to exit game loop
  int action = 0;
  char Y;

  // Game loop
  while (user.checkWin() == false && action != -100) {
    // Ready to harvest checks for each vegetable crop
    // If crop is ready to harvest, harvest output message will be displayed
    // and the correct number of crops will be added to the user's inventory

    // day - day_planted = growth_time
    //IMPLEMENTED IN FUNCTION OF WATERING CAN
    // POTATO
    bool pReady = pCrop.isCropReady((day * w.get_boost_val()) - pCrop.getDayPlanted());
    pCrop.add_harvested_crop(pReady);

    // TOMATO
    bool tReady = tCrop.isCropReady((day * w.get_boost_val()) - tCrop.getDayPlanted());
    tCrop.add_harvested_crop(tReady);

    // CABBAGE
    bool cbgReady = cbgCrop.isCropReady((day * w.get_boost_val()) - cbgCrop.getDayPlanted());
    cbgCrop.add_harvested_crop(cbgReady);

    // CARROT
    bool crtReady = crtCrop.isCropReady((day * w.get_boost_val()) - crtCrop.getDayPlanted());
    crtCrop.add_harvested_crop(crtReady);

    // List of actions
    cout << "Select a number to choose an action: "
         << "\n";
    cout << "1. Plant vegetable"
         << "\n";
    cout << "2. Upgrade equipment"
         << "\n";
    cout << "3. Sell crops"
         << "\n";
    cout << "4. Inspect vegetables"
         << "\n";
    cout << "5. Inspect equipment"
         << "\n";
    cout << "6. Inspect wallet"
         << "\n";
    cout << "7. Go to next day"
         << "\n";

    // user chooses action number
    cin >> action;
    cout << "\n";

    switch (action) {
        // Plant vegetable action
      case 1:
        cout << "Choose which vegetable to plant: "
             << "\n";
        cout << "1. Potato"
             << "\n";
        cout << "2. Tomato"
             << "\n";
        cout << "3. Cabbage"
             << "\n";
        cout << "4. Carrot"
             << "\n";

        // Plants crop based on user's choice
        int plant_action;
        cin >> plant_action;
        cout << "\n";

        switch (plant_action) {
          int num_seeds;
          case 1:
            cout << "Enter number of potato seeds to plant: ";
            cin >> num_seeds;
            pCrop.plantCrop(num_seeds);
            pCrop.setDayPlanted(day);
            break;
          case 2:
            cout << "Enter number of tomato seeds to plant: ";
            cin >> num_seeds;
            tCrop.plantCrop(num_seeds);
            tCrop.setDayPlanted(day);
            break;
          case 3:
            cout << "Enter number of cabbage seeds to plant: ";
            cin >> num_seeds;
            cbgCrop.plantCrop(num_seeds);
            cbgCrop.setDayPlanted(day);
            break;
          case 4:
            cout << "Enter number of carrot seeds to plant: ";
            cin >> num_seeds;
            crtCrop.plantCrop(num_seeds);
            crtCrop.setDayPlanted(day);
            break;
        }
        cout << "\n";
        cout << "Enter Y to continue: "
             << "\n";
        cin >> Y;
        cout << "\n";
        break;

        // Upgrade equipment action
      case 2:
        cout << "Choose which equipment to upgrade: "
             << "\n";
        cout << "1. Gardening hoe"
             << "\n";
        cout << "2. Fertiliser"
             << "\n";
        cout << "3. Watering can"
             << "\n";
     

        // Upgrade equipment based on user's choice
        int upgrade_action;
        cin >> upgrade_action;
        cout << "\n";

        // ******* PLACEHOLDER OUTPUT ************
        // ******* need to add functionality here ************
        switch (upgrade_action) {
          case 1:
               g.Upgrade();
            cout << "Gardening hoe upgraded to level "<<g.get_util_lvl()<<endl;
                cout << "\n";
            break;
          case 2:
               f.Upgrade();
            cout << "Fertiliser upgraded to level "<<f.get_util_lvl()<<endl;
                 cout<< "\n";
            break;
          case 3:
               w.Upgrade();
            cout << "Watering can upgraded to level"<<w.get_util_lvl()<<endl;
                 cout<< "\n";

            break;
        }
        cout << "\n";
        cout << "Enter Y to continue: "
             << "\n";
        cin >> Y;
        cout << "\n";
        break;

        // Sell crop action
      case 3:
        cout << "Choose which crop to sell: "
             << "\n";
        cout << "1. Potato"
             << "\n";
        cout << "2. Tomato"
             << "\n";
        cout << "3. Cabbage"
             << "\n";
        cout << "4. Carrot"
             << "\n";

        // Sell crop based on user's choice
        int sell_action;
        cin >> sell_action;
        cout << "\n";

        // Adds coins to the player's wallet after selling all stock of their
        // chosen crop Number of coins is calculated and then added
        //IMPLEMENTED FUNCTION OF FERTILISER, INCREASE COINS
        switch (sell_action) {
          case 1:
            user.addCoins(pCrop.sellCrop() * f.get_boost_val());
            break;
          case 2:
            user.addCoins(tCrop.sellCrop() * f.get_boost_val());
            break;
          case 3:
            user.addCoins(cbgCrop.sellCrop() * f.get_boost_val());
            break;
          case 4:
            user.addCoins(crtCrop.sellCrop() * f.get_boost_val());
            break;
        }
        cout << "\n";
        cout << "Enter Y to continue: "
             << "\n";
        cin >> Y;
        cout << "\n";
        break;

        // Inspect vegetables action
      case 4: {
        std::vector<Vegetable *> crop_vector = crop_inventory.getVectorCopy();
        cout << "Current vegetable inventory "
             << "\n";
        cout << "---------------------------"
             << "\n";
        cout << "Potatoes: " << crop_vector[0]->inspect_veg() << "\n";
        cout << "Tomatoes: " << crop_vector[1]->inspect_veg() << "\n";
        cout << "Cabbages: " << crop_vector[2]->inspect_veg() << "\n";
        cout << "Carrots: " << crop_vector[3]->inspect_veg() << "\n";

        cout << "\n";
        cout << "Enter Y to continue: "
             << "\n";
        cin >> Y;
        cout << "\n";
        break;
      }
        // Inspect equipment action
        // ******* PLACEHOLDER OUTPUT ************
        // ******* need to add functionality here ************
      case 5:
        cout << "Current equipment levels"
             << "\n";
        cout << "---------------------------"
             << "\n";
        cout << "Gardening hoe -> "
             << "Utility level: "<<g.get_util_lvl()<<endl;
             g.get_Function();
        cout<< "\n";
        cout << "Fertiliser -> "
             <<"Utility level: "<< f.get_util_lvl();
             f.get_Function();
        cout<< "\n";
        cout << "Watering can -> "
             <<"Utility level: "<< w.get_util_lvl();
             w.get_Function();
        cout<< "\n";

        cout << "\n";
        cout << "Enter Y to continue: "
             << "\n";
        cin >> Y;
        cout << "\n";
        break;

        // Inspect wallet action
      case 6:
        cout << "You currently have " << user.getCoins() << " coins!"
             << "\n";

        cout << "\n";
        cout << "Enter Y to continue: "
             << "\n";
        cin >> Y;
        cout << "\n";
        break;

        // Go to next day action
      case 7:
        day++;
        cout << "You have skipped to day " << day << "\n";

        cout << "\n";
        cout << "Enter Y to continue: "
             << "\n";
        cin >> Y;
        cout << "\n";
        break;
    }
  }

  // victory message
  cout << "Congratulations! You have reached 1000 coins."
       << "\n";
  cout << "Game finished."
       << "\n";
  return 0;
}