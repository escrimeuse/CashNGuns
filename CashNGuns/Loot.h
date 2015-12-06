#ifndef LOOT_H
#define LOOT_H

#include <string>
#include <iostream>

using std::string;
using std::ostream;

class Loot {

private:
	int id;		// the loot ID number
	std::string name;	// the loot name

public: 
	Loot(int aid, string aname);
	int getId() {
		return id;
	}
	string getName() {
		return name;
	}
	virtual friend ostream& operator<<(ostream& os, const Loot& loot) = 0;

};

#endif
