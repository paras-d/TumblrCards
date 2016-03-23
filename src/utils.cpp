/*
 * utils.cpp
 *
 *  Created on: Mar 23, 2016
 *      Author: Alex
 */

#include "utils.h"

using namespace std;

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
	cout << pad << s << endl;
}


