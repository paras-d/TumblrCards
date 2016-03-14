/*
 * deck.h
 *
 *  Created on: Mar 13, 2016
 *      Author: user
 */

#ifndef SRC_DECK_H_
#define SRC_DECK_H_

#include <array>
#include "card.h"

class Deck {
private:
	std::array<Card* , 60> deck;
	std::string deckName;
	unsigned int count;
public:
	Deck();
	virtual ~Deck();
	Card * draw_card();
	Card * draw_cards(int num);
	void shuffle();
	void add_card(Card* card);
	void add_card(Card* card, unsigned int index);
	bool well_formed();
	bool print_err(std::string err);
};

#endif /* SRC_DECK_H_ */
