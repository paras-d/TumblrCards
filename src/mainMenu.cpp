/*
 * mainMenu.cpp
 *
 *  Created on: Mar 8, 2016
 *      Author: Tumblr
 */
#include <iostream>
#include "mainMenu.h"

using namespace std;

MainMenu::MainMenu() {
	// TODO Auto-generated constructor stub
	cout << "~~Welcome to Tumblr Cards~~" << endl;
}

MainMenu::~MainMenu() {
	// TODO Auto-generated destructor stub
}

void MainMenu::singlePlayer() {
	// TODO preps the game to move to single player
}

void MainMenu::multiPlayer() {
	// TODO preps the game to move to multi-player
}

void MainMenu::deckList() {
	// TODO shows the list of created decks for editing
	// moves game to desk list editor
}

void MainMenu::settings() {
	// TODO moves to a settings menu.
	// what settings could this game have?
}

void MainMenu::quit() {
	// TODO quits the game.
}

bool MainMenu::printMenu() {
	// TODO Print the menu for the game
}

bool MainMenu::getSelections(istream& stream) {
	// TODO take in the players selection and call that method.
	string input;
	stream >> input;
}
