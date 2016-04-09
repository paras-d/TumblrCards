/*
 * deckBuilder.h
 *
 *  Created on: Apr 6, 2016
 *      Author: Tumblr
 */

#ifndef SRC_DECKBUILDER_H_
#define SRC_DECKBUILDER_H_

#include "deck.h"

class DeckBuilder {
private:
	std::vector<Deck> list;
	void print_set(std::string set);
	int selected;
public:
	DeckBuilder();
	virtual ~DeckBuilder();
	void start();
	Deck get_selected();
};

#endif /* SRC_DECKBUILDER_H_ */
