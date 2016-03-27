/*
 * game.cpp
 *
 *  Created on: Mar 26, 2016
 *      Author: Tumblr
 */

#include <string>
#include "game.h"

using namespace std;

Game::Game(string type) {
	players = type;
	if(players != "single" || players != "mutli")
		// Throw custruction error here
	cont = true;
}

Game::~Game() {
	/*
	 * TODO Auto-generated destructor stub
	 */
}

void Game::load_content() {
	/*
	 * TODO Load needed game content here
	 * suck as deck lists
	 */
}

void Game::unload_contant() {
	/*
	 * TODO Unload game data here
	 * this should be called at the end of the game
	 * to prep us for deconstruction
	 */
}

void Game::update() {
	/*
	 * TODO This is the running function of the game.
	 */
	if(cont) {
		if(players == "single")
			sp_update();
		else if(players == "multi")
			mp_update();
	}
}
void Game::draw() {

}

void Game::sp_update() {

}

void Game::mp_update() {

}
