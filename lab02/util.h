//
// Created by Aksza on 10/5/2022.
//

#ifndef CPP_2022_UTIL_H
#define CPP_2022_UTIL_H

#include "Point.h"
#include <cmath>
#include <fstream>
#include <time.h>

double distance(const Point& a, const Point& b);
bool isSquare(const Point& a, const Point& b, const Point& c, const Point& d);
void testIsSquare(const char * filename);
Point* createArray(int numPoints);

#endif //CPP_2022_UTIL_H
