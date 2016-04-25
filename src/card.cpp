/*
 * card.cpp
 *
 *  Created on: Mar 7, 2016
 *      Author: user
 */

#include "card.h"

using namespace std;

// Default contructor. This should rarely be called
// except for maybe when a token creature is generated
Card::Card() {
	// TODO Auto-generated constructor stub
	attack = 0;
	health = 0;
	cost = 1;
	currHP = health;
	name = "Void";
	ability = "does a thing";
}

Card::~Card() {
	// TODO Auto-generated destructor stub
}

void Card::build_card(string arg) {
	// TODO have card stats based on
	if      (arg == name)    return;
	else if (arg == "test1") name = "test1";
	else if (arg == "test2") name = "test2";
	else if (arg == "test3") name = "test3";
}

bool Card::trigger() {
	// TODO have the card's ability work here
	// so that at the start and end of each turn all cards
	// in play can have their tigger() called and their
	// ability checked. It should return true if the trigger
	// conditions are met. and goes off; false otherwise.

	// we should save looking at this for last. Many abilities
	// will be similar. So there must be a better way to have the
	// trigger work given the card name, without a uniquie ability
	// for each card.
	return true;
}

// Prints the card name in the form:
// NAME
// DESCRIPTION OF ABILITY
// (or flavor text)
// Atk/Def 
string Card::to_string() {
	string ret = name + "\n";
	ret += ability + "\n";
	ret += std::to_string(attack) + "/" + std::to_string(currHP);
	return ret;
}
