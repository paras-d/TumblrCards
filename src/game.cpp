/*
 * game.cpp
 *
 *  Created on: Mar 26, 2016
 *      Author: Tumblr
 */

#include "game.h"

Game::Game(Deck myDeck) {
	playerDeck = myDeck;
	playerHand = playerDeck.draw_cards(7);
	myTurn = true;
}

Game::~Game() {
	// TODO Auto-generated destructor stub
}

void Game::start_phase() {

}

void Game::draw_phase() {

}

void Game::combat_phase() {

}

void Game::end_phase() {

}

void Game::start() {

}

void Game::update(Game myGame) {

}

bool Game::end() {

}
