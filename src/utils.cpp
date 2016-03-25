/*
 * utils.cpp
 *
 *  Created on: Mar 23, 2016
 *      Author: Tumblr
 */

#include <string>
#include <sys/ioctl.h>
#include <iostream>
#include <unistd.h>
#include <cstdlib>
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

/*
 * This is a super naive way of clearing the screen but until I find
 * a better resource this will do.
 *
 * Taken from here:
 * https://www.daniweb.com/programming/software-development/threads/95284/clearing-screen-in-the-console
 */
void clear_console() {
#ifdef WINDOWS
  std::system ( "CLS" );
#else
  // Assume POSIX
  std::system ( "clear" );
#endif
}
