/*
 * player.cpp
 *
 *  Created on: Mar 28, 2016
 *      Author: user
 */

#include "player.h"

Player::Player()
	:life { 10 },
	 mana { 0 } {
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

bool Player::cast(unsigned int cardIndex) {
    /* 
     * TODO do card casting here
     * should move the card in the players
     * hand at the given index into the board
     * deck.
     */
	if(cardIndex < 0 || cardIndex > hand.size() - 1) return false;
	board.add_card(hand.get_card(cardIndex));
    return true;
}
