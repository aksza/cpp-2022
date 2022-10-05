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
    cout<<endl << "DISTANCE: "<< distance(pp1,pp2)<<endl;
//    Point p3(10,20);
//    Point p4(20,20);
//    Point p5(20,10);
//    Point p6(10,10);
//    if(isSquare(p3,p4,p5,p6)){
//        cout<<endl<<"YES";
//    } else{
//        cout<<"NO";
//    }
    testIsSquare("pontok.txt");
    delete pp1;
    delete pp2;
    int n;
    cout<< "ADD MEG HANY SZAMBOL ALLJON A TOMB: \n";
    cin >> n;
    auto *points = new Point[n];

    return 0;
}
