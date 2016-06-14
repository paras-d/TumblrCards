/*
 * point.cpp
 *
 *  Created on: June 12, 2016
 *      Author: Tumblr
 */

#include <string>
#include "point.h"

using namespace std;

/*
 * Default Point constructor
 */
Point::Point() {
    // TODO
}

/*
 * Creates a Point with the given coordinates (x_coord, y_coord)
 */
Point::Point(int x_coord, int y_coord) {
    // TODO
}

/*
 * Point clone constructor 
 */
Point::Point(const Point& clone) {
    // TODO
}

/*
 * Default Point destructor
 */
Point::~Point() {
    // TODO
}

/*
 * Checks if this point is equal to the given Point pnt.
 */
bool Point::equals(Point pnt) {
    // TODO
    return false;
}

/*
 * Returns the position of this Point as a Point.
 */
Point Point::get_location() {
    Point ret;
    // TODO
    return ret;
}

/*
 * Sets this point's coordinates equals to that of the
 * given Point (x_coord, y_coord).
 */
void Point::set_location(int x_coord, int y_coord) {
    // TODO
}

/*
 * Sets this point's coordinates equals to that of the
 * given Point pnt.
 */
void Point::set_location(Point pnt) {
    // TODO
}

/*
 * Returns this Point as a string in the format (x, y).
 */
string Point::to_string() {
    string ret;
    // TODO
    return ret;
}

/*
 * Moves this Point by dx in the x direction and dy in the
 * y direction. The position of this Point becomes
 * (x + dx, y + dy).
 */
void Point::translate(int dx, int dy) {
    // TODO
}
