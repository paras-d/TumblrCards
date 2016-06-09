/*
 * deckBuilder.h
 *
 *  Created on: Apr 29, 2016
 *      Author: Tumblr
 */

#include <iostream>
#include <sstream>
#include <string>
#include "utils.h"
#include "settings.h"

using namespace std;

/*
 * Default Settings constructor
 */
Settings::Settings() {
    // TODO Auto-generated constructor stub
    load_settings();
}

/*
 * Default Settings destructor
 */
Settings::~Settings() {
    // TODO Auto-generated destructor stub
}

// TODO finish load and save settings methods here
bool Settings::load_settings() { return true; }
bool save_settings() { return true; }

/*
 * Takes in the user input and calls the correct method
 */
bool Settings::get_input() {
	// TODO take in the players selection and call that method.
	int selection = 5;
	stringstream ss;
	string in;
	cin >> in;
	ss << in;
	ss >> selection;
	switch(selection) {
		case 1:
			break;
		case 2:
			break;
		case 3:;
			break;
		case 4:
			break;
		default:
			cout << in << " is not a valid option." << endl;
			return false;
	}
	return true;
}
