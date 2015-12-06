#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>

#include "Loot.h"

class Player {

private:
	std::string name;	// player's name
	int numWounds;		// number of wounds
	int lootValue[3];	// value of loot:	index 1 = total value of money
										//	index 2 = total value of diamonds
										//	index 3 = total value of paintings
	std::vector<Loot*> loot[3];		// an array of the player's loot, with each index pointing to a vector of loot
									// index 1 = vector of money
									// index 2 = vector of diamonds
									// index 3 = vector of paintings
	bool alive;

public:
	
	Player(std::string name);
	void setNumWounds(int num);
	int getNumWounds();
	void addLoot(Loot* lootToAdd);
	int getMoneyValue();
	int getDiamondValue();
	int getPaintingValue();

	



};

#endif
