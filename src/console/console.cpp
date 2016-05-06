/*
 * console.cpp
 *
 *  Created on: May 2, 2016
 *      Author: Tumblr
 */

#include <vector>
#include <string>
#include <iostream>
#include "console.h"

using namespace std;

Console::Console() {
	// TODO Auto-generated constructor stub
    for(unsigned int i = 0; i < get_height()-1; i++) {
        vector<char>* row = new vector<char>();
        for(unsigned int j = 0; j < get_width(); j++)
            row->push_back(' ');
        console.push_back(*row);
    }
}

Console::~Console() {
	// TODO Auto-generated destructor stub
}

bool Console::add_image(ImageMap image) {
    images.push_back(image);
    vector<vector<char>> map = image.get_map();
    unsigned int height = map.size() + image.get_y();
    for(unsigned int y = image.get_y(); y < height; y++) {
    	if(y >= get_height() - 1) break;
    	unsigned int width = map[y].size() + image.get_x();
		for(unsigned int x = image.get_x(); x < width; x++) {
			if(x >= get_width()) break;
			console[y][x] = map[y][x];
    	}
    }
    return true;
}

bool Console::add_image(string image_str) {
    ImageMap image(image_str);
    add_image(image);
    return true;
}

bool Console::add_image(string image_str, int x, int y) {
    ImageMap image(image_str, x, y);
    add_image(image);
    return true;
}

bool Console::print() {
	string ret;
	for(vector<char> row : console) {
		for(char col : row)
			ret += col;
		ret += '\n';
	}
	clear_console();
	clear_console(); // Console needs to clear twice???
	cout << ret;
	cout << "Input: ";
    return true;
}
