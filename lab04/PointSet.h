//
// Created by Aksza on 10/12/2022.
//

#ifndef CPP_2022_POINTSET_H
#define CPP_2022_POINTSET_H


#include "Point.h"
#include <vector>
#define MAX 2000

using namespace std;

class PointSet{
//különböző pontok
    vector<Point> points;
    //különböző pontok száma
    int n;
//pontok kozotti tavolsagok
    vector<double> distances;
//segédfüggvény, amely feltölti a distances tömböt
    void computeDistances();
public:
//konstruktor: előállítja a points tömböt
//kiszámítja a pontok közötti távolságokat (tavolsagok tömb),
    PointSet( int n = 100 );
//maximum kiválasztás a tavolsag tömbből
    double maxDistance() const;
//minimum kiválasztás a tavolsag tömbből
    double minDistance() const;
//összesen hány távolság értelmezhető n
//különböző pont között
    int numDistances() const;
//a pontok tároló kiíratása
    void printPoints() const;
//a tavolsagok tároló kiíratása
    void printDistances() const;
//növekvő sorrendbe rendezi a pontokat x koordináta szerint
    void sortPointsX();
//u. a. y koordináta szerint
    void sortPointsY();
//a tavolsagok tároló rendezése
    void sortDistances();
//hány darab különböző távolságot tartalmaz a tavolsagok tömb
    int numDistinctDistances();

    static bool comparex(Point a, Point b);
    static bool comparey(Point a, Point b);
};



#endif //CPP_2022_POINTSET_H
