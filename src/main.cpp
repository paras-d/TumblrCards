/*
 * mainMenu.cpp
 *
 *  Created on: Mar 8, 2016
 *      Author: Tumblr
 */
#include <iostream>
#include "mainMenu.h"
#include "utils.h"

using namespace std;

int main(int argc, char* argv[]) {
	// TODO we should have cla's for testing purposes

	// Checks for testing arguments
	if(argc > 1) {
		//TODO
	}

	// starts the game
	//clear_console();
	MainMenu menu;
	menu.print_menu();
	while(!menu.get_selections());

	return 0;
}
