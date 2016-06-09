/*
 * mainMenu.cpp
 *
 *  Created on: Mar 8, 2016
 *      Author: Tumblr
 */
#include <iostream>
#include <sstream>
#include <string>
#include "mainMenu.h"
#include "game.h"

using namespace std;

/*
 * Default MainMenu constructor
 */
MainMenu::MainMenu() {
	// TODO Auto-generated constructor stub
	builder.load_decklists();
}

/*
 * Default MainMenu destructor
 */
MainMenu::~MainMenu() {
	// TODO Auto-generated destructor stub
}

/*
 * This method is called when the player decides to
 * play a game vs the AI
 */
void MainMenu::single_player() {
	// Checks to make sure a deck is selected
    if(builder.get_selected() != NULL) {
		// Starts a single player game
	    Game game("single");
	    game.load_content(*builder.get_selected());

		// redisplay the main menu
	    do     print_menu_clr("screen_main");
		while (!get_input());
	} else {
		// if no deck is selected clear and inform player
		clear_console();
		cout << "No deck selected." << endl;

		// redisplay the main menu
		do     print_menu("screen_main");
		while (!get_input());
	}
}

void MainMenu::multi_player() {
	if(builder.get_selected() != NULL) {
		Game game("multi");
		game.load_content(*builder.get_selected());

		cout << "Game mode not available yet." << endl;

	    do     print_menu("screen_main");
		while (!get_input());
	} else {
		// if no deck is selected clear and inform player
		clear_console();
		cout << "No deck selected." << endl;

		// redisplay the main menu
		do     print_menu("screen_main");
		while (!get_input());
	}
}

/*
 * Starts deck builder menu system
 */
void MainMenu::deck_builder() {
	// TODO shows the list of created decks for editing
	// moves game to desk list editor
	do     print_menu_clr("screen_builder");
	while (!builder.get_input());

	do     print_menu_clr("screen_main");
	while (!get_input());
}

/*
 * Starts settings menu system
 */
void MainMenu::settings_menu() {
	// TODO moves to a settings menu.
	// what settings could this game have?
    do     print_menu_clr("screen_settings");
	while (!settings.get_input());

	do     print_menu_clr("screen_main");
	while (!get_input());
}

/*
 * Exits the game. Do any last destruction here
 */
void MainMenu::quit() {
	// TODO quits the game.
}

/*
 * Takes in the users input and then calls the
 * correct method
 */
bool MainMenu::get_input() {
	// TODO take in the players selection and call that method.
	int selection = 5;
	stringstream ss;
	string in;
	cin >> in;
	ss << in;
	ss >> selection;
	switch(selection) {
		case 1:
			single_player();
			break;
		case 2:
			multi_player();
			break;
		case 3:
			deck_builder();
			break;
		case 4:
			settings_menu();
			break;
		case 5:
			quit();
			break;
		default:
			cout << in << " is not a valid option." << endl;
			return false;
	}
	return true;
}
