//
// Created by Aksza on 10/12/2022.
//

#ifndef CPP_2022_POINT_H
#define CPP_2022_POINT_H


#include <iostream>
#include <cmath>
#define M 2000
using namespace std;

class Point : public error_code {
private:
    int x,y;
public:
    Point(int x = 0, int  y = 0);
    int getX() const;
    int getY() const;
    void print() const;
    double distanceTo( const Point &b);

};


#endif //CPP_2022_POINT_H
