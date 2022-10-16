// Implementation 

#include "Player.h"

// Default constructor for Player class
Player::Player() { coins = 0; }

// Functions
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