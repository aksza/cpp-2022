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
    auto *point = new Point[numPoints];
    srand((unsigned )time(0));
    for(int i = 0; i < numPoints; ++i){
        point[i] = Point(rand()%2000,rand()%2000);
    }
    return point;
}
void printArray(Point* points, int numPoints){
    for (int i = 0; i < numPoints; ++i) {
        cout<< "(" << points[i].getX() << ", " <<points[i].getY() <<")\n";
    }
}
pair<Point, Point> closestPoints(Point* points, int numPoints){
    pair<Point,Point> pair1;
    double mini = DBL_MAX;
    for (int i = 0; i < numPoints; ++i) {
        for (int j = i+1; j < numPoints; ++j) {
            if(distance(points[i],points[j])< mini){
                pair1.first = points[i];
                pair1.second = points[j];
                mini = distance(points[i],points[j]);
            }
        }
    }
    return pair1;
}
pair<Point, Point> farthestPoints(Point* points, int numPoints){
    pair<Point,Point> pair1;
    double maxi = 0;
    for (int i = 0; i < numPoints; ++i) {
        for (int j = i+1; j < numPoints; ++j) {
            if(distance(points[i],points[j])> maxi){
                pair1.first = points[i];
                pair1.second = points[j];
                maxi =distance(points[i],points[j]);
            }
        }
    }
    return pair1;
}
void sortPoints(Point* points, int numPoints){
    sort(points,points+numPoints,comp);
}
bool comp(Point p1,Point p2){
    return (p1.getX() < p2.getX());
}
Point* farthestPointsFromOrigin(Point* points, int numPoints){
    auto *p = new Point[10];
    double maxi;
    for (int i = 0; i < numPoints; ++i) {
        if(i < 10){
            p[i] = points[i];
        }
        if(i == 9){
            sort(p,p+10,cmp);
            maxi = distance(Point(0,0),p[9]);
        }
        if(i >=10 && maxi < distance(Point(0,0),points[i])){
            p[0] = points[i];
            maxi = distance(Point(0,0),points[i]);
            sort(p,p+10,cmp);
        }
    }
//    for (int i = 0; i < 10; ++i) {
//        cout<<distance(Point(0,0),p[i])<<endl;
//    }

    return p;
}
bool cmp(Point p1,Point p2){
    return (distance(Point(0,0),p1) < distance(Point(0,0),p2));
}
void deletePoints(Point* points){
    delete[] points;
}