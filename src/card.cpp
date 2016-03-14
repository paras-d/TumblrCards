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
	currHP = health;
	name = "Void";
	ability = "does a thing";
}

// This is the contructor that should be called when
// the game creates the card base.
Card::Card(string name) {
	// TODO Auto-generated constructor stub
	Card::name = name;
	build_card();
}

Card::~Card() {
	// TODO Auto-generated destructor stub
}

void Card::build_card() {
	// TODO have card stats based on input name
	// is there a better way to build a card other than
	// by name and still have them be uniquely named?
	// we will need a large pool of cards
	if(name.compare("test1") == 0) {
		attack = 1;
		health = 2;
		currHP = health;
	} else if(name.compare("test2") == 0) {
		attack = 2;
		health = 3;
		currHP = health;
	}
	ability = "does a thing";
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
