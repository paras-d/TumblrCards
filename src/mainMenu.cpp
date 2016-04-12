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
    if(builder.get_selected() != NULL) {
	    Game game("single");
	    game.load_content(*builder.get_selected());
	} else cout << "No deck selected." << endl;
	

	do     print_options();
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

	do     print_options();
	while (!get_selection());
}

void MainMenu::deck_list() {
	// TODO shows the list of created decks for editing
	// moves game to desk list editor
	builder.start();

	do     print_options();
	while (!get_selection());
}

void MainMenu::settings() {
	// TODO moves to a settings menu.
	// what settings could this game have?
	cout << "Got to settings()" << endl;

	do     print_options();
	while (!get_selection());
}

void MainMenu::quit() {
	// TODO quits the game.
	cout << "Got to quit()" << endl;
}

void MainMenu::print_logo() {
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
	print_center("\\:-'''''-:/     | \"$$$$/       |:|    \n");
	print_center("  \"\"III\"\"        \\___/         |:|    \n");
	print_center("    III                        |:|    \n");
	print_center("   (___)                       \\:/    \n");
	print_center("             TumblrCards              \n");
	cout << endl;
}

void MainMenu::print_options() {
	print_center("Main Menu\n");
	print_center("1) Single player     4) Settings\n");
	print_center("2) Multiplayer       5) Exit    \n");
	print_center("3) Deck lists                   \n");
	cout << endl;
	print_center("Enter selection [1-5]: ");
}

bool MainMenu::print_menu() {
	print_logo();
	print_options();
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
