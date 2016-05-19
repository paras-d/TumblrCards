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
	// list contains all of the build decks
	// selected is the deck we will work with
	std::vector<Deck*> list;
	size_t selected;

	void edit_selected();
	void new_deck();
	void select_deck();

	bool load_deck(std::string file);
	bool save_deck(Deck deck);
public:
	DeckBuilder();
	virtual ~DeckBuilder();
	bool load_decklists();
	const Deck* get_selected();
	bool get_input();
};

#endif /* SRC_DECKBUILDER_H_ */
