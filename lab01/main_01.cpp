#include <iostream>
#include "functions.h"
#include <sstream>
using namespace std;

int main(){
    //1.feladat
//    int number;
//    cin >> number;
//    cout << countBits(number);
//2.feladat
//    for (int i = 0; i < 35; ++i) {
//        int n = 0;
//        if(setBit(n, i)){
//            cout<<i<<" ---> " << n <<endl;
//        }else{
//            cout<<"Impossible operation!" << endl;
//        }
//    }

    //3feladat
//    double array[10];
//    int numOfElements;
//    cin>> numOfElements;
//    for (int i = 0; i < numOfElements; ++i) {
//        cin>>array[i];
//    }
//    cout<< mean(array, numOfElements);

    //4.feladat
//    double array[20];
//    int numOfElements;
//    cin >> numOfElements;
//    for (int i = 0; i < numOfElements; ++i) {
//        cin >> array[i];
//    }
//    cout << "Standard deviation: " << stddev(array,numOfElements);
    //5.feladat
//    double array[20];
//    int numElements;
//    cin >> numElements;
//    for (int i = 0; i < numElements; ++i) {
//        cin >> array[i];
//    }
//    pair<double,double> legnagyobbak = legnagyobbElem(array,numElements);
//    cout << legnagyobbak.first << " "<<legnagyobbak.second;
    //kar 1

//    istringstream iss("1 2 3 alma 4");
//    string number;
//    while(iss >> number) {
//        if()
//        cout << number << endl;
//    }

    //kar2

    string text;
    cout <<"enter a text: \n";
    getline(cin,text);
    //cout<<"\n" << countWords(text);

    //kar3
    //cout<< code(&text)<<'\n';
    //cout << decode(text);

    //kar 4

    cout << capitalizeWords(text);

    return 0;
}