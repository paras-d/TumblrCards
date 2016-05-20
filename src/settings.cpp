/*
 * deckBuilder.h
 *
 *  Created on: Apr 29, 2016
 *      Author: Tumblr
 */

#include <iostream>
#include <sstream>
#include <string>
#include "console/utils.h"
#include "settings.h"

using namespace std;

Settings::Settings() {
    // TODO Auto-generated constructor stub
    load_settings();
}

Settings::~Settings() {
    // TODO Auto-generated destructor stub
}

// TODO finish load and save settings methods here
bool Settings::load_settings() { return true; }
bool save_settings() { return true; }

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
