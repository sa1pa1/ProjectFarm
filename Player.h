#ifndef PLAYER_H
#define PLAYER_H


class Player {
 private:
  int coins;

 public:
  // Player constructor
  Player();

  // Functions
  void addCoins(int num);
  void removeCoins(int num);
  bool checkWin();
};

#endif  // PLAYER_H