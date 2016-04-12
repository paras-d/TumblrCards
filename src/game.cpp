/*
 * game.cpp
 *
 *  Created on: Mar 26, 2016
 *      Author: Tumblr
 */

#include <string>
#include <iostream>
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
	cout << "game destructed" << endl;
}

void Game::load_content(const Deck selected) {
	/*
	 * TODO Load needed game content here
	 * suck as deck lists
	 */
	player.select_deck(selected);
	update();
}

void Game::unload_content() {
	/*
	 * TODO Unload game data here
	 * this should be called at the end of the game
	 * to prep us for deconstruction
	 */
}

void Game::update() {
	/*
	 * TODO This is the running function of the game.
	 * This will be where the player takes their turn.
	 */
	cout << "starting your turn now" << endl;
	draw();
	cout << player.get_deck()->to_string() << endl;
	cout << "enter exit to exit: ";
	string in;
	cin >> in;
	if(in == "exit")
		cont = false;

	if(cont) {
		if(players == "single")
			sp_update();
		else if(players == "multi")
			mp_update();
	} else
		unload_content();
}

void Game::sp_update() {
	/*
	 * TODO Single player logic here
	 * This will be where the AI takes their turn
	 */
	cout << "sp: opponents turn starts." << endl;
	update();
}

void Game::mp_update() {
	/*
	 * TODO Multiplayer game works here
	 * This will be where the opponent takes their turn
	 */
	draw();

	cout << "mp: opponents turn starts" << endl;
	update();
}

void Game::draw() {
	/*

	 * TODO Draw the board state and players hand here.
	 */
	cout << "I would draw some stuff here" << endl;
}
