/*
 * mainMenu.cpp
 *
 *  Created on: Mar 8, 2016
 *      Author: Tumblr
 */
#include <iostream>
#include <sstream>
#include "mainMenu.h"

using namespace std;

MainMenu::MainMenu() {
	// TODO Auto-generated constructor stub
	// We should print some ASCII logo here
	// similar to the metasploit entrance.
	cout << "~~Welcome to Tumblr Cards~~" << endl;
}

MainMenu::~MainMenu() {
	// TODO Auto-generated destructor stub
}

void MainMenu::singlePlayer() {
	// TODO preps the game to move to single player
	cout << "Got to singlePlayer()" << endl;
}

void MainMenu::multiPlayer() {
	// TODO preps the game to move to multi-player
	cout << "Got to multiPlayer()" << endl;
}

void MainMenu::deckList() {
	// TODO shows the list of created decks for editing
	// moves game to desk list editor
	cout << "Got to deckList()" << endl;
}

void MainMenu::settings() {
	// TODO moves to a settings menu.
	// what settings could this game have?
	cout << "Got to settings()" << endl;
}

void MainMenu::quit() {
	// TODO quits the game.
	cout << "Got to quit()" << endl;
}

bool MainMenu::printMenu() {
	// TODO Print the menu for the game
	// I did all the printing manually so it
	// is clear what the print should look like.
	// She we have number based input or
	// something more sophisticated?
	cout << "    --Main Menu--" << endl;
	cout << "  1) Single Player" << endl;
    cout << "  2) Multiplayer" << endl;
    cout << "  3) Deck Lists" << endl;
    cout << "  4) Settings" << endl;
	cout << "  5) Exit" << endl;
	cout << "Enter selection: ";
	return true;
}

bool MainMenu::getSelections() {
	// TODO take in the players selection and call that method.
	string input;
	cin >> input;
	cout << input << endl;
	stringstream convert;
	convert << input;
	int selection = 0;
	if (!convert >> selection) {
		// handle bad input here
		cout << selection << " is not an option." << endl;
		return false;
	} else {
		cout << "entering switch now with " << selection << endl;
		switch(selection) {
		case 1:
			singlePlayer();
			break;
		case 2:
			multiPlayer();
			break;
		case 3:
			deckList();
			break;
		case 4:
			settings();
			break;
		case 5:
			quit();
			break;
		default:
			//bad input here
			return false;
		}
	}
	return true;
}
