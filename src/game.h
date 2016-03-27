/*
 * game.h
 *
 *  Created on: Mar 26, 2016
 *      Author: Tumblr
 */

#ifndef SRC_GAME_H_
#define SRC_GAME_H_

#include "deck.h"

class Game {
private:
	Deck playerDeck;
	Deck playerHand;
	Deck oppDeck;
	Deck oppHand;


public:
	Game();
	virtual ~Game();
	void initialize();

};

#endif /* SRC_GAME_H_ */
