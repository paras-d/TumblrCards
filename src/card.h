/*
 * card.h
 *
 *  Created on: Mar 7, 2016
 *      Author: user
 */

#ifndef SRC_CARD_H_
#define SRC_CARD_H_

#include <string>

class Card {
private:
	int attack;
	int health;
	int currHP;
	std::string name;
	std::string ability;

	// builds card base on input name
	void buildCard();
public:
	Card();
	virtual ~Card();
	Card(std::string name);
	bool trigger();
	std::string to_string();
	// these will need to be edited later
	// to handle effects from other cards
	// as well as during combat
	int getAtk() { return attack; }
	int getHP() { return currHP; }
};

#endif /* SRC_CARD_H_ */
