/*
 * mainMenu.cpp
 *
 *  Created on: Mar 8, 2016
 *      Author: Tumblr
 */
#include "main.h"
#include "mainMenu.h"

using namespace std;

int main(int argc, char* argv[]) {
	// TODO we should have cla's for testing purposes

	// starts the game
	MainMenu menu;
	menu.printMenu();
	menu.getSelections(cin);


	return 0;
}
