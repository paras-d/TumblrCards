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
#include <fstream>
#include "utils.h"

using namespace std;

void clear_console() {
#ifdef WINDOWS
  std::system ("CLS");
#else
  std::system ("clear");
#endif
}

// TODO Make it work in Windows too and fix cases where 0 and 0 are returned

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

void print_center(string input) {
	// Pad the string based on console and line length
	// such that the text be displayed center screen
	string pad = "";
	int k = (get_console_width() / 2) - (input.length() / 2);
	for (int i = 0; i < k; i++) { pad.append(" "); }
	// Append the formatted line to the cumulative string
	cout << pad << input << endl;
}

string get_display_screen(string type) {
    // Open the assets file for the current screen
    string   buffer;
    string   ret = "";
    ifstream screen_file("../src/assets/"+type);

    if (screen_file.is_open()) {
        while (getline(screen_file, buffer)) {
            // Pad the string based on console and line length
            // such that the text be displayed center screen
            string pad = "";
            int k = (get_console_width() / 2) - (buffer.length() / 2);
            for (int i = 0; i < k; i++) { pad.append(" "); }

            // Append the formatted line to the cumulative string
            if(screen_file.peek() != EOF)
            	ret = ret + pad + buffer + '\n';
            else ret = ret + pad + buffer;
        }
        screen_file.close();
    }
    else {
        // TODO: Raise an exception here, if an asset file
        // cannot be opened then something serious has gone wrong.
        cout << "FILE COULD NOT BE OPENED" << endl;
    }
    return ret;
}
