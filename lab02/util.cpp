//
// Created by Aksza on 10/5/2022.
//

#include "util.h"

double distance(const Point &a, const Point &b) {
    return sqrt(pow((b.getX() - a.getX()),2) + pow((b.getY() - a.getY()),2));
}
bool isSquare(const Point& a, const Point& b, const Point& c, const Point& d){
    double dis;
    dis = distance(a,b);
    if(dis != distance(b,c) or dis != distance(c,d) or dis != distance(d,a) or distance(a,c) != distance(b,d)){
        return false;
    }
    return true;
}

void testIsSquare(const char *filename) {
    ifstream fin(filename);
    if(!fin.is_open()){
        cout << "SIKERTELEN ALLOMANY MEGNYITAS";
        exit(-1);
    }
    while (!fin.eof()) {
        int x, y;
        fin >> x >> y;
        auto *a = new Point(x, y);
        fin >> x >> y;
        auto *b = new Point(x, y);
        fin >> x >> y;
        auto *c = new Point(x, y);
        fin >> x >> y;
        auto *d = new Point(x, y);
        a->print();
        b->print();
        c->print();
        d->print();
        if (isSquare(*a, *b, *c, *d)) {
            cout << "\tYES\n";
        } else {
            cout << "\tNO\n";
        }
    }
    fin.close();
}

Point* createArray(int numPoints){
    int nr,nr2;
    Point *point = new Point[numPoints];
    srand(time(NULL));
    for(int i = 0; i < numPoints; ++i){
        nr = rand() % 2001;
        nr2 = rand() % 2001;
        //point[i] = new Point(nr)
    }
}