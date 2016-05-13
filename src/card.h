/*
 * card.h
 *
 *  Created on: Mar 7, 2016
 *      Author: user
 */

#ifndef SRC_CARD_H_
#define SRC_CARD_H_

#include <string>
#include "console/imageMap.h"

class Card {
private:
	int attack;
	int health;
	int currHP;
	int cost;
	std::string name;
	std::string ability;
	ImageMap image;
	
	/* 
	 * This method may get moved to utils if it is helpful
	 * parse_flag sets the flag (i.e. {0}) in a var string to the 
	 * specified text while inteligently formatting the stirng
	 * for output
	 */
	void parse_flag(std::string flag, std::string* ptr, std::string text);
public:
	Card();
	virtual ~Card();

	// builds card base on input from file
	void build_card(std::string arg);

	// should return true if the trigger goes off
	// false if it does not
	bool trigger();

	// prints the card in the form:
	// Name
	// Description
	// Atk / HP
	std::string to_string();

	// these will need to be edited later
	// to handle effects from other cards
	// as well as during combat
	int get_atk() { return attack; }
	int get_hp() { return currHP; }
	int get_cost() { return cost; };
	std::string get_name() { return name; }
	ImageMap* get_image() { return &image; };
};

#endif /* SRC_CARD_H_ */
