/*
 * card.cpp
 *
 *  Created on: Mar 7, 2016
 *      Author: user
 */

#include "card.h"

Card::Card() {
	// TODO Auto-generated constructor stub
	attack = 0;
	health = 0;
	currHP = health;
	name = "Void";
}

Card::Card(std::string name) {
	// TODO Auto-generated constructor stub
	name = "Void";
	buildCard();
}

Card::~Card() {
	// TODO Auto-generated destructor stub
}

void Card::buildCard() {
	// TODO have card stats based on input name
	attack = 0;
	health = 0;
	currHP = health;
}
