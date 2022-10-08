//
// Created by Aksza on 10/5/2022.
//

#ifndef CPP_2022_UTIL_H
#define CPP_2022_UTIL_H

#include "Point.h"
#include <cmath>
#include <fstream>
#include <time.h>
#include <float.h>
#include <algorithm>

double distance(const Point& a, const Point& b);
bool isSquare(const Point& a, const Point& b, const Point& c, const Point& d);
void testIsSquare(const char * filename);
Point* createArray(int numPoints);
void printArray(Point* points, int numPoints);
pair<Point, Point> closestPoints(Point* points, int numPoints);
pair<Point, Point> farthestPoints(Point* points, int numPoints);
void sortPoints(Point* points, int numPoints);
bool comp(Point p1,Point p2);
Point* farthestPointsFromOrigin(Point* points, int numPoints);
bool cmp(Point p1,Point p2);
void deletePoints(Point* points);

#endif //CPP_2022_UTIL_H
