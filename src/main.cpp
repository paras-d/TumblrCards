/*
 * mainMenu.cpp
 *
 *  Created on: Mar 8, 2016
 *      Author: Tumblr
 */
#include <iostream>
#include "mainMenu.h"
#include "console/console.h"

using namespace std;

int test1();

int main(int argc, char* argv[]) {
    if(argc > 1) {
        // TODO we should maybe have cla's for testing purposes
        for(int i = 0; i < argc; i++) {
        	string var = argv[i];
        	if(var == "-c") return test1();
        }
    }

	// starts the game
	//clear_console();
	MainMenu menu;
	
	do    print_menu_clr("screen_main");
	while (!menu.get_input());

	return 0;
}

int test1() {
	Card card;
	Console console;
	console.add_image(card.get_image());
	console.print();
	cout << endl;
	return 0;
}

