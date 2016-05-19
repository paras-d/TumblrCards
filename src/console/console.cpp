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

	clear();
}

Console::~Console() {
	// TODO Auto-generated destructor stub
}

bool Console::add_image(ImageMap* image) {
    images.push_back(image);
    update();
    return true;
}

bool Console::add_image(string image_str) {
    ImageMap* image = new ImageMap(image_str);
    add_image(image);
    return true;
}

bool Console::add_image(string image_str, int x, int y) {
    ImageMap* image = new ImageMap(image_str, x, y);
    add_image(image);
    return true;
}

void Console::print() {
	clear_console();
	for(vector<char> row : console) {
		for(char col : row)
			cout << col;
		cout << endl;
	}
	cout << "Input: ";
}

void Console::clear() { 
    console.clear();
    images.clear();

    // Fills our screen with empty space
    for(size_t i = 0; i < get_height()-1; i++) {
        vector<char> row;
        for(size_t j = 0; j < get_width(); j++)
            row.push_back(' ');
        console.push_back(row);
    }
};

void Console::update() {
    // creates temp vector to store images to be printed
    vector<ImageMap*> temp;
    for(ImageMap* image : images)
        temp.push_back(image);
        
    // then uses the clear function to reset our screen
    clear();
    
    // finally moves images back to our list of images
    for(ImageMap* image : temp) {
        images.push_back(image);
    }

    // adds all of the images back to console at their current pos
    for(ImageMap* image : images) {
        vector<vector<char>> map = image->get_map();
        for(size_t y = 0; y < map.size(); y++) {
   		    size_t con_y = y + image->get_y();
   		    if(con_y >= get_height()-1) break;
		    for(size_t x = 0; x < map[y].size(); x++) {
		    	size_t con_x = x + image->get_x();
		    	if(con_x >= get_width()) break;
		    	console[con_y][con_x] = map[y][x];
    	    }
        }
    }
}
