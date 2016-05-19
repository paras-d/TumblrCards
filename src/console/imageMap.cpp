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
#include "utils.h"

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
    
    // flag string not found
    if(found == string::npos) return;
    
    int found_y = found / (get_width() + 1);
    int found_x = found - (found_y * (get_width() + 1));
    
    // Something went wrong???
    //if(map[found_y][found_x] != flag.at(0)) return;
    
	if(align == "center") {
        // TODO Align the text centered on the flag
        
        // do left-pad here if smaller than flag
        text = leftpad(text, flag.size());
        
        found_x = found_x - (text.size() / 2) + (flag.size() / 2);
        
        for(size_t i = 0; i < text.size(); i++) {
            if(i > map[found_y].size()) break;
            if(found_x + i < 0) continue;
            
            map[found_y][found_x + i] = text[i];
        }
    } else if(align == "left-pad") {
        // TODO Align the the last char of text with
        // the '}' of the flag adding spaces as needed
        
        // do left-pad here if smaller than flag
        text = leftpad(text, flag.size());
        
        for(size_t i = 0; i < text.size(); i++) {
            if(i > map[found_y].size()) break;
            map[found_y][found_x + i] = text[i];
        }
    } else if(align == "right-pad") {
        // TODO Align the the first char of text with
        // the '{' of the flag adding spaces as needed
        
        // do right-pad here if smaller than flag
        text = rightpad(text, flag.size());
        
        found_x += flag.size() - 1;
        
        for(size_t i = 0; i < text.size(); i++) {
            map[found_y][found_x - i] = text[text.size() - i - 1];
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
