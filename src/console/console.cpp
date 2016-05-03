/*
 * console.cpp
 *
 *  Created on: May 2, 2016
 *      Author: Tumblr
 */

#include <vector>
#include <string>
#include "console.h"

using namespace std;

Console::Console() {
	// TODO Auto-generated constructor stub
    for(int i = 0; i < get_console_height(); i++) {
        std::vector<char>* row = new vector<char>();
        for(int j = 0; j < get_console_width(); j++)
            row->push_back(' ');
        console.push_back(*row);
    }
}

Console::~Console() {
	// TODO Auto-generated destructor stub
}

bool Console::add_image(ImageMap image) {
    images.pop_back(image);
    return true;
}

bool Console::add_image(std::string image_str) {
    ImageMap image(image_str);
    add_image(ImageMap image);
    return true;
}

bool Console::add_image(std::string image_str, int x, int y) {
    ImageMap image(image_str, x, y);
    add_image(ImageMap image);
    return true;
}

bool Console::print() {
    return true;
}
