/*
 * console.h
 *
 *  Created on: May 2, 2016
 *      Author: Tumblr
 */

#ifndef SRC_CONSOLE_H_
#define SRC_CONSOLE_H_

#include "../utils.h"
#include "imageMap.h"

class Console {
private:
    std::vector<std::vector<char>> console;
    std::vector<ImageMap> images;
public:
	Console();
	virtual ~Console();
    bool add_image(ImageMap image);
    bool add_image(std::string image_str);
    bool add_image(std::string image_str, int x, int y);
    bool print();
    unsigned int get_width() const { return get_console_width()-1; };;
    unsigned int get_height() const { return get_console_height()-1; };
};

#endif /* SRC_CONSOLE_H_ */
