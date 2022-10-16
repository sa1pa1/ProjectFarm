/**
 * Implementation of the Player class
 *
 * Player class has data member 'coins' which stores the number of coins the
 * user has during the game. To start the game, the number of coins the user has
 * is initialised to 0.
 */

#include "Player.h"

// Default constructor for Player class
Player::Player() { coins = 0; }

// Functions

// returns the number of coins the Player currently has
int Player::getCoins() { return coins; }

// check if the Player has won the game
bool Player::checkWin() {
  if (coins >= 1000) {
    return true;
  }
  return false;
}

// add coins to the Player's coin total
void Player::addCoins(int num) { coins += num; }

// remove coins from the Player's coin total
void Player::removeCoins(int num) { coins -= num; }

// check if Player has enough coins for upgrade
bool Player::upgradeCheck(int cost) {
  if (coins >= cost) {
    return true;
  }
  return false;
}

// check if Player wants to sell crop, add coins based on cropNum * price
void Player::sellCrop(int cropNum, int price) {
  char response;
  switch (response) {
    case 'y':
      coins += cropNum * price;
  }
}