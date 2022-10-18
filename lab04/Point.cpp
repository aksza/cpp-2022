//
// Created by Aksza on 10/12/2022.
//

#include "Point.h"

Point::Point(int x, int y) {
    if(x >= 0 && x <= M && y >= 0 && y <= M){
    this->x = x;
    this->y = y;}
}

int Point::getX() const {
    return x;
}

int Point::getY() const {
    return y;
}

void Point::print() const {
    cout << "(" << x << ", " << y << ")"<<endl;
}

double Point::distanceTo( const Point &b) {
    return sqrt(pow((this->x - b.getX()),2) + pow((this->y - b.getY()),2));
}