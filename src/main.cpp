/*
 * mainMenu.cpp
 *
 *  Created on: Mar 8, 2016
 *      Author: Tumblr
 */
#include <iostream>
#include "mainMenu.h"
#include "deck.h"

using namespace std;

int main(int argc, char* argv[]) {
	// TODO we should have cla's for testing purposes

	// starts the game
	//clear_console();
	MainMenu menu;
	do     menu.print_menu_clr("screen_main");
	while (!menu.get_input());
	cout << "Exiting the game now" << endl;

	return 0;
}
