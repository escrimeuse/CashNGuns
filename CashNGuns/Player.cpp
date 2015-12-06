#include "Player.h"
#include "Loot.h"
#include "Money.h"
#include "Diamond.h"
#include "Painting.h"
#include <string>
#include <vector>

Player::Player(std::string aname) {
	name = aname;
	numWounds = 0;
	lootValue[0] = 0;
	lootValue[1] = 0;
	lootValue[2] = 0;
	std::vector<Loot*> loot[3] = { std::vector<Loot*>(),std::vector<Loot*>(), std::vector<Loot*>() };


};

void Player::setNumWounds(int num) {
	numWounds = num;
}

int Player::getNumWounds() {
	return numWounds;
}

int Player::getMoneyValue() {
	return lootValue[0];
}

int Player::getDiamondValue() {
	return lootValue[1];
}

int Player::getPaintingValue() {
	return lootValue[3];
}