/*
 * game.h
 *
 *  Created on: Mar 26, 2016
 *      Author: Tumblr
 */

#ifndef SRC_GAME_H_
#define SRC_GAME_H_

#include "deck.h"
#include "player.h"

class Game {
private:
	void unload_content();
	void update();
	void draw();
	void sp_update();
	void mp_update();
	bool cont;
	std::string players;
	Player player;
	Player opponent;

public:
	Game(std::string type);
	virtual ~Game();
	void load_content(Deck selected);
};

#endif /* SRC_GAME_H_ */
