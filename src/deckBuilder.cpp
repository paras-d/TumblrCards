/*
 * deckBuilder.cpp
 *
 *  Created on: Apr 6, 2016
 *      Author: user
 */

#include <iostream>
#include <string>
#include "deckBuilder.h"
#include "utils.h"

using namespace std;

DeckBuilder::DeckBuilder() {
	// TODO Auto-generated constructor stub
	selected = 0;
}

DeckBuilder::~DeckBuilder() {
	// TODO Auto-generated destructor stub
	cout << "deckBuilder destructed" << endl;
}

void DeckBuilder::start() {
	clear_console();
	cout << "deck building started" << endl;
	cout << "testing to make sure decks work" << endl;
	list.push_back(new Deck());

	for(int i = 0; i < 20; i++)
		list[selected]->add_card(new Card());

	cout << list[selected]->to_string() << endl;

	cout << "Enter exit to exit: ";
	string in;
	cin >> in;
	if(in != "exit")
		start();
}

void DeckBuilder::print_set(string set) {
	if(set == "test") {

	}
}
