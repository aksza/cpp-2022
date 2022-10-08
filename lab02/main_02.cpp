#include <iostream>
#include "Point.h"
#include "util.h"

using namespace std;

int main(int argc, char** argv) {
    Point p1(2,3);
    cout<<"p1( "<<p1.getX()<<","<<p1.getY()<<")"<<endl;
    Point p2(100, 200);
    cout<<"p2( "<<p2.getX()<<","<<p2.getY()<<")"<<endl;
    Point * pp1 = new Point(300, 400);
    Point * pp2 = new Point(500, 1000);
    cout<<"pp1( "<<pp1->getX()<<","<<pp1->getY()<<")"<<endl;
    cout<<"pp2( "<<pp2->getX()<<","<<pp2->getY()<<")"<<endl;
    pp2->print();
    cout<<endl << "DISTANCE: "<< distance(p1,p2)<<endl;
//    Point p3(10,20);
//    Point p4(20,20);
//    Point p5(20,10);
//    Point p6(10,10);
//    if(isSquare(p3,p4,p5,p6)){
//        cout<<endl<<"YES";
//    } else{
//        cout<<"NO";
//    }
//    testIsSquare("pontok.txt");
    delete pp1;
    delete pp2;
    //7
    int n;
    cout<< "ADD MEG HANY SZAMBOL ALLJON A TOMB: \n";
    cin >> n;
    auto *points = new Point[n];
    points = createArray(n);
    //8
    printArray(points,n);
    //9.
    pair<Point,Point> pair1 = closestPoints(points,n);
    cout<<"CLOSEST POINTS:\n("<<pair1.first.getX()<<", "<<pair1.first.getY()<<")-"<<"("<<pair1.second.getX()<<", "<<pair1.second.getY()<<")\n";
    //10
    pair<Point,Point> pair2 = farthestPoints(points,n);
    cout<<"FARTHEST POINTS:\n("<<pair2.first.getX()<<", "<<pair2.first.getY()<<")-"<<"("<<pair2.second.getX()<<", "<<pair2.second.getY()<<")\n";
    //11
    sortPoints(points, n);
    cout<<"THE ARRAY AFTER SORTING:\n";
    printArray(points,n);
    //12
    cout<<"THE ARRAY'S 10 FARTEST POINTS\n";
    Point *p = farthestPointsFromOrigin(points,n);
    printArray(p,10);
    //13
    deletePoints(p);
    deletePoints(points);
    return 0;
}
