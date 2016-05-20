/*
 * utils.h
 *
 *  Created on: Mar 23, 2016
 *      Author: Tumblr
 */

#ifndef SRC_UTILS_H_
#define SRC_UTILS_H_

void clear_console();
void print_center(std::string print);
size_t get_console_width();
size_t get_console_height();
std::string get_display_screen(std::string type);
std::string load_file(std::string fileName);
std::string leftpad(std::string str, int len = 0, char ch = ' ');
std::string rightpad(std::string str, int len = 0, char ch = ' ');
bool print_menu_clr(std::string type);
bool print_menu(std::string type);

#endif /* SRC_UTILS_H_ */
