/*
 * imageMap.cpp
 *
 *  Created on: May 2, 2016
 *      Author: Tumblr
 */

#include <string>
#include <vector>
#include <iostream>
#include "imageMap.h"

using namespace std;

ImageMap::ImageMap()
    :x_coord { 0 },
     y_coord { 0 } {
	// TODO Auto-generated constructor stub
	set_image(" ");
}

ImageMap::ImageMap(string image)
    :x_coord { 0 },
     y_coord { 0 } {
	// TODO Auto-generated constructor stub
	set_image(image);
}

ImageMap::ImageMap(string image, int x_pos, int y_pos)
    :x_coord { x_pos },
     y_coord { y_pos } {
	// TODO Auto-generated constructor stub
	set_image(image);
}

ImageMap::ImageMap(const ImageMap &clone)
    :map { clone.get_map() },
     x_coord { clone.get_x() },
     y_coord { clone.get_y() } {
	// TODO Auto-generated constructor stub
}

ImageMap::~ImageMap() {
	// TODO Auto-generated destructor stub
}

void ImageMap::set_image(string image) {
    map.clear();
    map.push_back(vector<char>());
    int curr_row = 0;
    for(char& c : image) {
        // TODO parse string in to 2D vector
        if(c == '\n') {
            map.push_back(vector<char>());
            curr_row++;
            continue;
        } else if ((int)c == 13) continue;
        map[curr_row].push_back(c);
    }
}

void ImageMap::parse_flag(string flag, string text, string align) {
    size_t found = to_string().find(flag);
    
    // String not found
    if(found == string::npos) return;
    
    int found_y = found / get_width();
    int found_x = found - (found_y * get_width());
    
    // Something went wrong???
    if(map[found_y][found_x] != flag.at(0)) return;
    
	if(align == "center") {
        // TODO Align the text centered on the flag
        int text_center = text.size() / 2;
    } else if(align == "left-pad") {
        // TODO Align the the first char of text with
        // the '{' of the flag
        for(size_t i = 0; i < text.size(); i++) {
            if(i > map[found_y].size()) break;
            map[found_y][found_x + i] = text.at(i);
        }
    } else if(align == "right-pad") {
        // TODO Align the the last char of text with
        // the '}' of the flag
        for(size_t i = 0; i < text.size(); i++) {
            if(map[found_y].size() - i < 0) break;
            map[found_y][found_x + i] = text.at(i);
        }
    }
}

string ImageMap::to_string() {
	string ret = "";
	for(vector<char> row : map) {
		for(char& col : row)
			ret = ret + col;
		ret = ret + "\n";
	}
    ret.pop_back();
	return ret;
}
