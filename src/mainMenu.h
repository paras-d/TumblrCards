/*
 * mainMenu.h
 *
 *  Created on: Mar 8, 2016
 *      Author: user
 */

#ifndef SRC_MAINMENU_H_
#define SRC_MAINMENU_H_

#include <string>

class MainMenu {
private:
	// starts a single player game
	void singlePlayer();

	// starts a multi-player game
	void multiPlayer();

	// moves to a deck list menu
	void deckList();

	// moves to a settings menu
	// what settings would exist?
	void settings();

	// quits the game
	void quit();
public:
	MainMenu();
	virtual ~MainMenu();

	// prints the menu to the terminal
	bool printMenu();

	// takes in the users input for the selection
	bool getSelections(std::istream& stream);
};

#endif /* SRC_MAINMENU_H_ */
