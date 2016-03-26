/*
 * mainMenu.cpp
 *
 *  Created on: Mar 8, 2016
 *      Author: Tumblr
 */
#include <iostream>
#include "mainMenu.h"
#include "deck.h"

using namespace std;

void test_deck();

int main(int argc, char* argv[]) {
	// TODO we should have cla's for testing purposes

	// Checks for testing arguments
	if(argc > 1) {
		for(int i = 1; i < argc; i++) {
			string arg(argv[i]);
			if(arg == "deckTest") test_deck();
		}
	}

	// starts the game
	MainMenu menu;
	do     menu.print_menu();
	while (!menu.get_selections());

	return 0;
}

void test_deck() {
	Deck deck;
	cout << "Deck stored" << endl;
	for(int i = 0; i < 100; i++) {
		Card card;
		cout << i << " cards stored" << endl;
		if(i % 4 == 0) card.build_card("test1");
		else if(i % 3 == 0) card.build_card("test2");
		else card.build_card("test3");
		deck.add_card(&card);
	}

	for(unsigned int i = 0; i < deck.size(); i++)
		cout << deck.draw_card()->get_name() << endl;
}
