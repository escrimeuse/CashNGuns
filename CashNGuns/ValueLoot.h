#ifndef VALUELOOT_H
#define VALUELOOT_H

#include "Loot.h"

class ValueLoot : public Loot {

private:
	int value;

public:
	ValueLoot(int value, int id, string name);
	int getValue() {
		return value;
	}

};

#endif
