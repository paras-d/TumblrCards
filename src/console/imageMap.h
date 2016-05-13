/*
 * player.h
 *
 *  Created on: Mar 28, 2016
 *      Author: Tumblr
 */

#ifndef SRC_IMAGEMAP_H_
#define SRC_IMAGEMAP_H_

#include <vector>

class ImageMap {
private:
    std::vector<std::vector<char>> map;
    int x_coord;
    int y_coord;
public:
	ImageMap();
    ImageMap(std::string image);
    ImageMap(std::string image, int x_pos, int y_pos);
    ImageMap(const ImageMap &clone);
    virtual ~ImageMap();
    std::vector<std::vector<char>> get_map() const { return map; };
    void set_image(std::string image);
    int get_x() const { return x_coord; };
    int get_y() const { return y_coord; };
    int get_height() const { return map.size(); };
    int get_width() const { return map[0].size(); };
    void set_x(int new_x = 0) { x_coord = new_x; };
    void set_y(int new_y = 0) { y_coord = new_y; };
    void set_pos(int new_x, int new_y) { set_x(new_x); set_y(new_y); };
    std::string to_string();
};

#endif /* SRC_IMAGEMAP_H_ */

