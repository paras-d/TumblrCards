/*
 * card.cpp
 *
 *  Created on: Mar 7, 2016
 *      Author: user
 */

#include "card.h"

using namespace std;

Card::Card() {
	// TODO Auto-generated constructor stub
	attack = 0;
	health = 0;
	currHP = health;
	name = "Void";
	ability = "does a thing";
}

Card::Card(string name) {
	// TODO Auto-generated constructor stub
	Card::name = name;
	buildCard();
}

Card::~Card() {
	// TODO Auto-generated destructor stub
}

void Card::buildCard() {
	// TODO have card stats based on input name
	if(name.compare("test1") == 0) {
		attack = 1;
		health = 2;
		currHP = health;
	} else if(name.compare("test2") == 0) {
		attack = 2;
		health = 1;
		currHP = health;
	}
	ability = "does a thing";
}

string Card::to_string() {
	string ret = name + "\n";
	ret += ability + "\n";
	ret += std::to_string(attack) + "/" + std::to_string(currHP);
	return ret;
}
