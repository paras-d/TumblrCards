/*
 * mainMenu.h
 *
 *  Created on: Mar 8, 2016
 *      Author: user
 */

#ifndef SRC_MAINMENU_H_
#define SRC_MAINMENU_H_

#include <string>
#include "deckBuilder.h"

class MainMenu {
private:
	// starts a single player game
	void single_player();

	// starts a multi-player game
	void multi_player();

	// moves to a deck list menu
	void deck_list();

	// moves to a settings menu
	// what settings would exist?
	void settings();

	// splits the menu in to two parts
	void print_options();
	void print_logo();

	// quits the game
	void quit();

	DeckBuilder builder;
public:
	MainMenu();
	virtual ~MainMenu();

	// prints the menu to the terminal
	bool print_menu(std::string type);

	// takes in the users input for the selection
	bool get_selection();
};

#endif /* SRC_MAINMENU_H_ */
