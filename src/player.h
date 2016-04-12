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
	bool select_deck(Deck selected);
	int deck_size() { return hand.size(); };
	int hand_size() { return deck.size(); };
	Deck* get_hand() { return &hand; };
	Deck* get_deck() { return &deck; };
	bool draw();
	bool cast(int cardIndex);
};

#endif /* SRC_PLAYER_H_ */
