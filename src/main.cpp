/*
 * mainMenu.cpp
 *
 *  Created on: Mar 8, 2016
 *      Author: Tumblr
 */
#include <iostream>
#include "mainMenu.h"
#include "console.h"

using namespace std;

int test1();

int main(int argc, char* argv[]) {
    if(argc > 1) {
        // TODO we should maybe have cla's for testing purposes
    }

	// starts the game
	MainMenu menu;
	
	do    print_menu_clr("screen_main");
	while (!menu.get_input());

	return 0;
}
