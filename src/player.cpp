/*
 * player.cpp
 *
 *  Created on: Mar 28, 2016
 *      Author: user
 */

#include "player.h"

Player::Player() {
	// TODO Auto-generated constructor stub

}

Player::~Player() {
	// TODO Auto-generated destructor stub
}

bool Player::select_deck(Deck selected) {
    if(&selected != NULL) {
	    deck = selected;
	    return true;
	}
	return false;
}

bool Player::draw() {
    hand.add_card(deck.draw_card());
    return true;
}

bool Player::cast(int cardIndex) {
    /* 
     * TODO do card casting here
     * should move the card in the players
     * hand at the given index int the board
     * deck.
     */
    return true;
}
