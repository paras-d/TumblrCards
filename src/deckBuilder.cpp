/*
 * deckBuilder.cpp
 *
 *  Created on: Apr 6, 2016
 *      Author: user
 */

#include <iostream>
#include <sstream>
#include "deckBuilder.h"
#include "utils.h"

using namespace std;

DeckBuilder::DeckBuilder()
    :selected(0) {
	// TODO Auto-generated constructor stub
}

DeckBuilder::~DeckBuilder() {
	// TODO Auto-generated destructor stub
}

void DeckBuilder::start() {
	// TODO Add any initilizing stuff here
	// before priting menu

	do print_menu_clr("screen_builder");
	while(!get_input());
}

void DeckBuilder::list_decks() {

}

void DeckBuilder::select_deck() {

}

void DeckBuilder::edit_selected() {

}

bool DeckBuilder::print_menu(string type) {
    string screen_disp = get_display_screen(type);
    cout << screen_disp << endl;
    return true;
}

bool DeckBuilder::print_menu_clr(string type) {
    clear_console();
    print_menu(type);
    return true;
}

bool DeckBuilder::get_input() {
	// TODO take in the players selection and call that method.
	int selection = 5;
	stringstream ss;
	string in;
	cin >> in;
	ss << in;
	ss >> selection;
	switch(selection) {
		case 1:
			list_decks();
			break;
		case 2:
			select_deck();
			break;
		case 3:
			edit_selected();
			break;
		case 4:
			break;
		default:
			cout << in << " is not a valid option." << endl;
			return false;
	}
	return true;
}

const Deck* DeckBuilder::get_selected() {
	if(!list.empty())
		return list[selected];
	else
		return nullptr;
}
