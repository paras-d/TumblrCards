/*
 * deck.h
 *
 *  Created on: Mar 13, 2016
 *      Author: user
 */

#ifndef SRC_DECK_H_
#define SRC_DECK_H_

#include "card.h"

class Deck {
private:
	Card* deck[60];
	std::string deckName;
	unsigned int count;
public:
	Deck();
	virtual ~Deck();
	Card draw_card();
	Card * draw_cards(int num);
	void shuffle();
	void add_card();
	void add_card(int index);
	bool well_formed();
	bool print_err(std::string err);
};

#endif /* SRC_DECK_H_ */
