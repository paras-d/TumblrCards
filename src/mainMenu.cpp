/*
 * mainMenu.cpp
 *
 *  Created on: Mar 8, 2016
 *      Author: Tumblr
 */
#include <iostream>
#include <sstream>
#include "mainMenu.h"
#include "utils.h"

using namespace std;

MainMenu::MainMenu() {
	// TODO get_selections();
}

MainMenu::~MainMenu() {
	// TODO Auto-generated destructor stub
}

void MainMenu::single_player() {
	// TODO preps the game to move to single player
	cout << "Got to single_player()" << endl;
}

void MainMenu::multi_player() {
	// TODO preps the game to move to multi-player
	cout << "Got to multi_player()" << endl;
}

void MainMenu::deck_list() {
	// TODO shows the list of created decks for editing
	// moves game to desk list editor
	cout << "Got to deck_list()" << endl;
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

bool MainMenu::print_menu() {

    clear_console();
    cout << endl;
	print_center("              Welcome to:             \n");
	print_center("    /:\\                       (\"\"\")   \n");
	print_center("    |:|          /$$           III    \n");
	print_center("    |:|         | $$         __III__  \n");
	print_center("    |:|        /$$$$$$     /:-.___,-:\\\n");
	print_center("    |:|       |_  $$_/     \\]  |:|  [/\n");
	print_center("    |:|         | $$           |:|    \n");
	print_center("/]  |:|  [\\     | $$ /$$       |:|    \n");
	print_center("\\:-'\"\"\"`-:/     | \"$$$$/       |:|    \n");
	print_center("  \"\"III\"\"        \\___/         |:|    \n");
	print_center("    III                        |:|    \n");
	print_center("   (___)                       \\:/    \n");
	print_center("             TumblrCards              \n");
	cout << endl << endl;
	print_center("1) Single player     4) Settings\n");
	print_center("2) Multiplayer       5) Exit    \n");
	print_center("3) Deck lists                   \n");
	cout << endl;
	print_center("Enter selection [1-5]: ");

	return true;
}

bool MainMenu::get_selections() {
	// TODO take in the players selection and call that method.
	int selection = 0;
	cin >> selection;

	switch(selection) {
		case 1:
			single_player();
			break;
		case 2:
			multi_player();
			break;
		case 3:
			deck_list();
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
	return true;
}
