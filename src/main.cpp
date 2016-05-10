/*
 * mainMenu.cpp
 *
 *  Created on: Mar 8, 2016
 *      Author: Tumblr
 */
#include <iostream>
#include "mainMenu.h"
#include "deck.h"
#include "utils.h"
#include "console/console.h"

using namespace std;

int test_console();

int main(int argc, char* argv[]) {
	// TODO we should maybe have cla's for testing purposes
    if(argc > 1) {
        string arg;
        for(int i = 0; i < argc; i++) {
            arg = argv[i];
            if(arg == "-c")
                return test_console();
        }
    }

	// starts the game
	//clear_console();
	MainMenu menu;
	
	do    print_menu_clr("screen_main");
	while (!menu.get_input());

	return 0;
}


int test_console() {
	ImageMap* test = new ImageMap(load_file("card_template"), 0, 0);
    Console console;
    console.add_image(test);
    test->set_y(5);
    console.update();
    console.print();
    string wait;
    cin >> wait;
    if(wait != "q") return test_console();
    return 0;
}

