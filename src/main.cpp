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

int test_image_map(Console con);

int test_console() {
    Console console;
    console.print();
    string wait;
    cin >> wait;
    if(wait == "test") return test_image_map(console);
    else if(wait != "q") return test_console();
    return 0;
}

int test_image_map(Console con) {
	ImageMap test("test", 10, 0);
	con.add_image(test);
	con.print();
    string wait;
    cin >> wait;
    if(wait == "test") return test_image_map(con);
    else if(wait != "q") return test_console();
	return 0;
}
