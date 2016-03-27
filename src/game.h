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
	void load_content();
	void unload_content();
	void update();
	void draw();
	void sp_update();
	void mp_update();
	bool cont;
	std::string players;

public:
	Game(std::string type);
	virtual ~Game();
};

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
	bool select_deck(Deck deck);
	bool draw();
};

#endif /* SRC_GAME_H_ */
