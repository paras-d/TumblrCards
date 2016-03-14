/*
 * deck.cpp
 *
 *  Created on: Mar 13, 2016
 *      Author: user
 */
#include <iostream>
#include "deck.h"

using namespace std;

Deck::Deck() {
	count = 0;
	well_formed();
}

Deck::~Deck() {
	// TODO Auto-generated destructor stub
}

// removes the top card of the deck and returns it
// shifting all the cards up one
Card Deck::draw_card() {
	well_formed();
	Card ret;
	well_formed();
	return ret;
}

// removes the top num cards from the deck and returns
// a pointer to the first index as an array. shifts all
// the cards up num
Card * Deck::draw_cards(int num) {
	well_formed();
	// TODO
	well_formed();
	return nullptr;
}

// randomizes the order of the deck
void Deck::shuffle() {
	well_formed();
	// TODO
	well_formed();
}

// adds a card to the deck and then shuffles the deck
void Deck::add_card() {
	if(!well_formed()) return;
	well_formed();
}

// adds a card at the specified index. i.e 0 for the top
void Deck::add_card(int index) {
	well_formed();
	// TODO
	well_formed();
}

// checks the integrity of the deck and returns false with an error message
// if something is wrong. Returns true otherwise.
// Rules:
//		A Deck may not be larger than 60 cards
//		A deck may not have any nullptr between 0 and count
bool Deck::well_formed() {
	// may not be larger than 60 cards
	if(count > deck.size()) return print_err("Count is larger than 60");
	for(unsigned int i = 0; i < count; i++) {

		// checks to make sure count is not larger than the size of the deck
		if(&deck[i] == nullptr) return print_err("Count is larger than size of deck");
		int cardCount = 1;
		for(unsigned int j = i + 1; j < count; j++) {

			// adding it here checks the integrity of the array on our first pass
			if(&deck[i] == nullptr) return print_err("Count is larger than size of deck");
			Card c1 = deck[i];
			Card c2 = deck[j];
			if(c1.get_name().compare(c2.get_name()) == 0) cardCount++;

			// you may not have more than 4 of any card in a deck
			if(cardCount > 4) return print_err("You may not have more than 4 of any card");
		}
	}

	// if the integrity of this data structure is held, returns true
	return true;
}

// prints the error message passed and returns false
bool Deck::print_err(string err) {
	cout << err << endl;
	return false;
}
