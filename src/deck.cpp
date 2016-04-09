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

Deck::Deck()
	:count{0} {
	// TODO Auto-generated constructor stuff
	well_formed();
}

Deck::~Deck() {
	// TODO Auto-generated destructor stuff
}

Deck::Deck(const Deck &clone)
	:count{clone.count} {
	// TODO cloning stuff here
	// passes clone's data to here
	well_formed();
}

Deck* Deck::operator=(const Deck* clone) {
	// do set equals operations here
	// set this equal to the clone
	return this;
}

Deck& Deck::operator=(const Deck &clone) {
	// do set equals operations here
	// set this equal to the clone
	return *this;
}

// removes the top card of the deck and returns it
// shifting all the cards up one
Card* Deck::draw_card() {
	well_formed();
	if(count == 0) return nullptr;
	Card* ret = deck[0];
	for(unsigned int i = 1; i < count; i++)
		deck[i-1] = deck[i];
	well_formed();
	return ret;
}

// removes the top num cards from the deck and returns
// a "Deck" as the drawn cards. shifts all
// the cards up num
Deck Deck::draw_cards(int num) {
    Deck ret;
	if(!well_formed()) return ret;

    // draws a card from our deck to add
    // to the return deck;
    for(int i = 0; i < num; i++)
        ret.add_card(draw_card());
	
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
bool Deck::add_card(Card* card) {
	if(!well_formed()) return false;

	// no room to add the card
	if(count == 20) return print_err("No more room to add a card.");

	// adds the card and increments count
	card[count++] = *card;
	cout << card->to_string() << " has been added." << endl;
	shuffle();

	return well_formed();
}

// adds a card at the specified index. i.e 0 for the top
bool Deck::add_card(Card* card, unsigned int index) {
	if(!well_formed()) return false;
	
	// index can not be larger than count
	if(index >= count - 1) return print_err("Index is out of bounds.");

	// no room to add the card
	if(count == 20) return false;

	// moves all the cards after index down one
	for(unsigned int i = count - 1; i > index; i--) {
		deck[i + 1] = deck[i];
	}

	// puts the deck in at index and increments count
	deck[index] = card;
	count++;
	
	well_formed();
	return true;
}

unsigned int Deck::size() {
	return count;
}

// checks the integrity of the deck and returns false with an error message
// if something is wrong. Returns true otherwise.
// Rules:
//		A Deck may not be larger than 20 cards
//		A deck may not have any nullptr between 0 and count
bool Deck::well_formed() {
	// may not be larger than 60 cards
	cout << count << " vs " << deck.size() << endl;
	if(count > deck.size()) return print_err("Count is larger than 20");
	for(unsigned int i = 0; i < count; i++) {
		// checks to make sure count is not larger than the size of the deck
		cout << i << " vs " << count << endl;
		if(deck[i] == nullptr) return print_err("Count is larger than size of deck");
		
		// COMENTED OUT FOR TESTING
		//int cardCount = 1;
		//for(unsigned int j = i + 1; j < count; j++) {
        //
			// adding it here checks the integrity of the array on our first pass
		//	if(deck[i] == nullptr) return print_err("Count is larger than size of deck");
		//	Card c1 = *deck[i];
		//	Card c2 = *deck[j];
		//	if(c1.get_name() == c2.get_name()) cardCount++;

			// you may not have more than 2 of any card in a deck
		//	if(cardCount > 2) return print_err("You may not have more than 2 of any card");
		//}
	}

	// if the integrity of this data structure is held, returns true
	return true;
}

// prints the error message passed and returns false
bool Deck::print_err(string err) {
	cout << err << endl;
	return false;
}

string Deck::to_string() {
    string ret;
	for(unsigned int i = 0; i < count; i++) {
		ret += deck[i]->to_string();

	}
	return ret;
}
