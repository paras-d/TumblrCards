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
#include "console/utils.h"
#include "game.h"

using namespace std;

MainMenu::MainMenu() {
	// TODO Auto-generated constructor stub
	builder.load_decklists();
}

MainMenu::~MainMenu() {
	// TODO Auto-generated destructor stub
}

void MainMenu::single_player() {
    if(builder.get_selected() != NULL) {
	    Game game("single");
	    game.load_content(*builder.get_selected());

	    do     print_menu_clr("screen_main");
		while (!get_input());
	} else {
		clear_console();
		cout << "No deck selected." << endl;

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
		clear_console();
		cout << "No deck selected." << endl;

		do     print_menu("screen_main");
		while (!get_input());
	}
}

void MainMenu::deck_builder() {
	// TODO shows the list of created decks for editing
	// moves game to desk list editor
	do     print_menu_clr("screen_builder");
	while (!builder.get_input());

	do     print_menu_clr("screen_main");
	while (!get_input());
}

void MainMenu::settings_menu() {
	// TODO moves to a settings menu.
	// what settings could this game have?
    do     print_menu_clr("screen_settings");
	while (!settings.get_input());

	do     print_menu_clr("screen_main");
	while (!get_input());
}

void MainMenu::quit() {
	// TODO quits the game.
}

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
