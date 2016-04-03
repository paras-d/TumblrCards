/*
 * deck.cpp
 *
 *  Created on: Mar 13, 2016
 *      Author: Tumblr
 */

#include <iostream>
#include "deck.h"
#include "stdlib.h"

using namespace std;

Deck::Deck() {
	// TODO Auto-generated constructor stuff
	count = 0;
	well_formed();
}

Deck::~Deck() {
	// TODO Auto-generated destructor stuff
}

// removes the top card of the deck and returns it
// shifting all the cards up one
Card * Deck::draw_card() {
	well_formed();
	if(count == 0) return nullptr;
	Card* ret = deck[0];
	for(unsigned int i = 1; i < count; i++)
		deck[i-1] = deck[i];
	well_formed();
	return ret;
}

// removes the top num cards from the deck and returns
// a pointer to the first index as an array. shifts all
// the cards up num
Deck Deck::draw_cards(int num) {
	Deck ret;
	if(!well_formed()) return ret;
	// TODO
	well_formed();
	return ret;
}

// randomizes the order of the deck
void Deck::shuffle() {
	if(!well_formed()) return;
	// Traverses through the array swapping each index with a random other index
	for(unsigned int i = 0; i < count; i++) {
		unsigned int r = rand() % count;
		Card* temp;
		temp = deck[i];
		deck[i] = deck[r];
		deck[r] = temp;
	}
	well_formed();
}

// adds a card to the deck and then shuffles the deck
void Deck::add_card(Card* card) {
	if(!well_formed()) return;

	// no room to add the card
	if(count == 60) return;

	// adds the card and increments count
	card[count++] = *card;
	shuffle();

	well_formed();
}

// adds a card at the specified index. i.e 0 for the top
void Deck::add_card(Card* card, unsigned int index) {
	if(!well_formed()) return;

	// index can not be larger than count
	if(index >= count - 1) return;

	// no room to add the card
	if(count == 60) return;

	// moves all the cards after index down one
	for(unsigned int i = count - 1; i > index; i--) {
		deck[i + 1] = deck[i];
	}

	// puts the deck in at index
	deck[index] = card;
	well_formed();
}

unsigned int Deck::size() {
	return count;
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
			Card c1 = *deck[i];
			Card c2 = *deck[j];
			if(c1.get_name() == c2.get_name()) cardCount++;

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
