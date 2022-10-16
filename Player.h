#ifndef PLAYER_H
#define PLAYER_H

#include "Inventory.h"
#include "Vegetable.h"
#include "Potato.h"
#include "Cabbage.h"
#include "Tomato.h"
#include "Carrot.h"
#include "Item.h"

class Player {
 private:
  int coins;

 public:
  // Player constructor
  Player();

  // Functions
  int getCoins();
  void addCoins(int num);
  void removeCoins(int num);
  bool checkWin();
  bool upgradeCheck(int cost);
  void sellCrop(int cropNum, int price);
};

#endif  // PLAYER_H