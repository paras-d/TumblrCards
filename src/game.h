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
	bool myTurn;
	void start_phase();
	void draw_phase();
	void combat_phase();
	void end_phase();

public:
	Game(Deck myDeck);
	virtual ~Game();
	void start();
	void update(Game myGame);
	bool end();
};

#endif /* SRC_GAME_H_ */
