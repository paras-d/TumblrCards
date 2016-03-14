/*
 * deck.cpp
 *
 *  Created on: Mar 13, 2016
 *      Author: user
 */

#include "deck.h"

using namespace std;

Deck::Deck() {
	// TODO Auto-generated constructor stub
	count = 0;

}

Deck::~Deck() {
	// TODO Auto-generated destructor stub
}

// removes the top card of the deck and returns it
// shifting all the cards up one
Card Deck::draw_card() {
	Card ret;
	return ret;
}

// removes the top num cards from the deck and returns
// a pointer to the first index as an array. shifts all
// the cards up num
Card * Deck::draw_cards(int num) {
	return nullptr;
}

// randomizes the order of the deck
void Deck::shuffle() {

}

// adds a card to the deck and then shuffles the deck
void Deck::add_card() {

}

// adds a card at the specified index. i.e 0 for the top
void Deck::add_card(int index) {

}

// checks the integrity of the deck
bool Deck::well_formed() {
	return true;
}
