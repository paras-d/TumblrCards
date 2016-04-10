/*
 * player.h
 *
 *  Created on: Mar 28, 2016
 *      Author: user
 */

#ifndef SRC_PLAYER_H_
#define SRC_PLAYER_H_

#include "deck.h"

class Player {
private:
	Deck deck;
	Deck hand;
	Deck board;
	Deck discard;

public:
	Player();
	virtual ~Player();
	Player* get_state();
	bool select_deck(Deck selected);
	int deck_size();
	int hand_size();
	Deck* get_hand() { return &hand; };
	Deck* get_deck() { return &deck; };
	bool draw();
	bool cast(int cardIndex);
};

#endif /* SRC_PLAYER_H_ */
