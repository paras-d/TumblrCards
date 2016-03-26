/*
 * utils.cpp
 *
 *  Created on: Mar 23, 2016
 *      Author: Alex
 */

#include <cstdlib>
#include "utils.h"

using namespace std;

// TODO Make it work in Windows too and fix cases where 0 and 0 are returned

void clear_console() {
	system("clear");
}

int get_console_width() {
	struct winsize size;
	ioctl(STDOUT_FILENO,TIOCGWINSZ,&size);
	return size.ws_col;
}

int get_console_height() {
	struct winsize size;
	ioctl(STDOUT_FILENO,TIOCGWINSZ,&size);
	return size.ws_row;
}

void print_center(string s) {
	string pad = "";
	int k = (get_console_width() / 2) - (s.length() / 2);

	for (int i = 0; i < k; i++)
		pad.append(" ");
	cout << pad << s;
}


