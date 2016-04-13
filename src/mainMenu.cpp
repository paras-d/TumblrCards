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
#include "utils.h"
#include "game.h"

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
	cout << "Testing game creation now." << endl;

	/*
	 * Remove deletes. We need to find a way to destruct
	 * the game upon completion. As it stands games stay
	 * on the stack until the program exits.
	 */

	Game game("single");
	/*
	 * Trying to pass selected deck through here
	 * however it is a temp variable. I have tried
	 * binding it to a const and that didn't work either.
	 */

	game.load_content(*builder.get_selected());

	do     print_menu("screen_main");
	while (!get_selection());
}

void MainMenu::multi_player() {
	// TODO preps the game to move to multi-player
	cout << "Got to multi_player()" << endl;
	cout << "Testing game creation now." << endl;

	/*
	 * Remove deletes. We need to find a way to destruct
	 * the game upon completion. As it stands games stay
	 * on the stack until the program exits.
	 */
	Game game("multi");
	do     print_menu("screen_main");
	while (!get_selection());
}

void MainMenu::deck_list() {
	// TODO shows the list of created decks for editing
	// moves game to desk list editor
	do     print_menu("screen_main");
	while (!get_selection());
}

void MainMenu::settings() {
	// TODO moves to a settings menu.
	// what settings could this game have?
        do     print_menu("screen_settings");
	while (!get_selection());
}

void MainMenu::quit() {
	// TODO quits the game.
	cout << "Got to quit()" << endl;
}

bool MainMenu::print_menu(string type) {
    clear_console();
    string screen_disp = get_display_screen(type);
    cout << screen_disp << endl;
    return true;
}

bool MainMenu::get_selection() {
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
			deck_list();
			break;
		case 4:
			settings();
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
