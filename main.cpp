// **** Add header comment here

// compile with:
// g++ WateringCan.h Fertiliser.h GardeningHoe.h Player.h Inventory.h Potato.h
// Tomato.h Cabbage.h Carrot.h WateringCan.cpp Fertiliser.cpp GardeningHoe.cpp
// Player.cpp Inventory.cpp Potato.cpp Tomato.cpp Cabbage.cpp Carrot.cpp
// main.cpp -o main

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

#include "Cabbage.h"
#include "Carrot.h"
#include "Equipment.h"
#include "Fertiliser.h"
#include "GardeningHoe.h"
#include "Inventory.h"
#include "Item.h"
#include "Player.h"
#include "Potato.h"
#include "Tomato.h"
#include "Vegetable.h"
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

  // Background day count and output counter
  int day = 1;
  int counter = 1;

  // Ask user for their name
  string name;
  cout << "Enter your name: ";
  cin >> name;
  cout << "\n";

  // Instructions message
  cout << "Hi " << name << "! Here are the instructions on how to play..."
       << "\n";

  cout << "\n";
  cout << "This is a farming simulator where you have to collect 1000 coins to "
          "win."
       << "You can collect coins by selling crops, you already have potato "
          "crops but you can buy more crops from the trader."
       << "You can also buy equipment upgrades for your hoe, watering can and "
          "fertiliser. The upgrades assist you with earning more coins."
          "To play you must type in the number corresponding with that option. "
          "Good luck!"
       << "\n";

  char key;
  cout << "\n";
  cout << "Enter any key to continue: "
       << "\n";
  cin >> key;
  cout << "\n";

  // enter -100 to exit game loop
  int action = 0;
  char Y;

  // Game loop
  while (user.checkWin() == false && action != -100) {
    // Ready to harvest checks for each vegetable crop
    // If crop is ready to harvest, harvest output message will be displayed
    // and the correct number of crops will be added to the user's inventory

    // initialise current multipliers
    int output_multiplier = g.get_boost_val();
    int day_multiplier = w.get_boost_val();

    // POTATO
    bool pReady = pCrop.isCropReady(day - pCrop.getDayPlanted());
    pCrop.add_harvested_crop(output_multiplier, pReady);

    // TOMATO
    bool tReady = tCrop.isCropReady(day - tCrop.getDayPlanted());
    tCrop.add_harvested_crop(output_multiplier, tReady);

    // CABBAGE
    bool cbgReady = cbgCrop.isCropReady(day - cbgCrop.getDayPlanted());
    cbgCrop.add_harvested_crop(output_multiplier, cbgReady);

    // CARROT
    bool crtReady = crtCrop.isCropReady(day - crtCrop.getDayPlanted());
    crtCrop.add_harvested_crop(output_multiplier, crtReady);

    // List of actions
    // User selects by entering numbers 1-9
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
    cout << "8. Save progress"
         << "\n";
    cout << "9. Load progress"
         << "\n";

    // user chooses action number
    cin >> action;
    cout << "\n";

    switch (action) {
        // Plant vegetable action
        // Displays the number of days the crop will take to grow
      case 1:
        cout << "Choose which vegetable to plant (days till harvest): "
             << "\n";
        cout << "1. Potato "
             << "(" << pCrop.getGrowthTime() / day_multiplier << " days)"
             << "\n";
        cout << "2. Tomato "
             << "(" << tCrop.getGrowthTime() / day_multiplier << " days)"
             << "\n";
        cout << "3. Cabbage "
             << "(" << cbgCrop.getGrowthTime() / day_multiplier << " days)"
             << "\n";
        cout << "4. Carrot "
             << "(" << crtCrop.getGrowthTime() / day_multiplier << " days)"
             << "\n";

        // Plants crop based on user's choice
        int plant_action;
        cin >> plant_action;
        cout << "\n";

        // Asks user how many seeds they want to plant
        // Minimum 0 and Maximum 10
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

          default:
            cout << "Invalid input. Please try again."
                 << "\n";
            cout << "\n";
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

        // Upgrades the user's chosen piece of equipment
        // Provided the user has enough coins in their wallet
        switch (upgrade_action) {
          case 1:
            if (user.getCoins() >= g.get_equip_val()) {
              g.Upgrade();
              user.removeCoins(g.get_equip_val());
              cout << g.get_equip_val() << " spent!" << endl;
              cout << "Gardening hoe upgraded to level " << g.get_util_lvl()
                   << endl;
              cout << "\n";
            } else
              cout << "Not enough coins to upgrade" << endl;
            break;
          case 2:
            if (user.getCoins() >= f.get_equip_val()) {
              f.Upgrade();
              user.removeCoins(f.get_equip_val());
              cout << f.get_equip_val() << " spent!" << endl;
              cout << "Fertiliser upgraded to level " << f.get_util_lvl()
                   << endl;
              cout << "\n";
            } else
              cout << "Not enough coins to upgrade" << endl;
            break;
          case 3:
            if (user.getCoins() >= w.get_equip_val()) {
              w.Upgrade();
              user.removeCoins(w.get_equip_val());
              cout << w.get_equip_val() << " spent!" << endl;
              cout << "Watering can upgraded to level " << w.get_util_lvl()
                   << endl;
              cout << "\n";
            } else
              cout << "Not enough coins to upgrade" << endl;
            break;

          default:
            cout << "Invalid input. Please try again."
                 << "\n";
            cout << "\n";
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
          default:
            cout << "Invalid input. Please try again."
                 << "\n";
            cout << "\n";
        }
        cout << "\n";
        cout << "Enter Y to continue: "
             << "\n";
        cin >> Y;
        cout << "\n";
        break;

        // Inspect vegetables action
        // Displays the number of crops the user has in their inventory for each
        // vegetable
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
        // Displays information of user's equipment
        // Shows current equipment levels and functionality of each piece of
        // equipment
      case 5:
        cout << "Current equipment levels"
             << "\n";
        cout << "---------------------------"
             << "\n";
        cout << "Gardening Hoe -> "
             << "Utility level: " << g.get_util_lvl() << "\n";
        g.get_Function();
        cout << "\n";
        cout << "\n";
        cout << "Fertiliser -> "
             << "Utility level: " << f.get_util_lvl() << "\n";
        f.get_Function();
        cout << "\n";
        cout << "\n";
        cout << "Watering can -> "
             << "Utility level: " << w.get_util_lvl() << "\n";
        w.get_Function();
        cout << "\n";

        cout << "\n";
        cout << "Enter Y to continue: "
             << "\n";
        cin >> Y;
        cout << "\n";
        break;

        // Inspect wallet action
        // Displays the current number of coins the user has
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
        // User skips to the next day
      case 7:
        counter++;
        day += day_multiplier;
        cout << "You have skipped to day " << counter << "\n";

        cout << "\n";
        cout << "Enter Y to continue: "
             << "\n";
        cin >> Y;
        cout << "\n";
        break;

        // Save coin progress
      case 8: {
        ofstream myfile("save.txt");
        if (myfile.is_open()) {
          myfile << user.getCoins();
          myfile.close();
        } else
          cout << "error" << endl;
        cout << "file saved \n";
        return 0;
        break;
      }

        // Load coin progress
      case 9: {
        fstream myfile;
        myfile.open("save.txt", ios::in);
        if (!myfile) {
          cout << "error";
        } else {
          char ch;
          int a;
          while (1) {
            myfile >> ch;
            if (myfile.eof()) break;

            a == ch - '0';
          }
          user.addCoins(a);
          myfile.close();
        }
        break;
      }
      // if user inputs a number not 1-9
      default:
        cout << "Invalid input. Please try again."
             << "\n";
        cout << "\n";
    }
  }

  // Victory message
  cout << "\n";
  cout << "--------------------------------------------------------------------"
          "-------------------------"
       << "\n";
  cout << "                       Congratulations! You have reached 1000 coins."
       << "\n";
  cout << "--------------------------------------------------------------------"
          "-------------------------"
       << "\n";
  cout << "Game finished."
       << "\n";
  return 0;
}
