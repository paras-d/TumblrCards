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
	deck = selected;
	return true;
}
