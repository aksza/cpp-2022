//
// Created by Aksza on 10/5/2022.
//

#include "functions.h"
#include <sstream>

int countBits(int number){
    int sum = 0;
    while(number != 0){
        sum += number & 1;
        number = number >> 1;
    }
    return sum;
}
bool setBit(int& number, int order){
    if( order < 0 || order >31){
        return false;
    }
    if(order == 0){
        return true;
    }
    number |= 1UL << order -1;
    return true;
}
double mean(double array[], int numElements){
    if(numElements <= 0){
        return NAN;
    }
    double sum = 0;
    for (int i = 0; i < numElements; ++i) {
        sum += array[i];
    }
    return sum / numElements;
}
double stddev(double array[], int numElements){
    if(numElements == 0 || mean(array,numElements) == NAN ){
        return NAN;
    }
    double avg = mean(array,numElements);
    double eredmeny = 0,res = 0;
    for(int i = 0; i < numElements; ++i) {
        eredmeny = array[i] - avg;
        eredmeny *= eredmeny;
        res += eredmeny;
    }
    res /= (numElements -1);
    return sqrt(res);
}
pair<double ,double> legnagyobbElem(double array[],int numElements){
    pair<double,double> legnagyobbak (NAN,NAN);
    if(numElements == 1){
        legnagyobbak = make_pair(array[0],array[0]);
        return legnagyobbak;
    }
    if(numElements < 1){
        return legnagyobbak;
    }
    if(array[0] > array[1]){
        legnagyobbak.first = array[0];
        legnagyobbak.second = array[1];
    } else{
        legnagyobbak.first = array[1];
        legnagyobbak.second = array[0];
    }
    for (int i = 2; i < numElements; ++i) {
        if(legnagyobbak.first < array[i]){
            legnagyobbak.second = legnagyobbak.first;
            legnagyobbak.first = array[i];
        } else if(legnagyobbak.second < array[i]){
            legnagyobbak.second = array[i];
        }
    }
    return legnagyobbak;
}
int countWords(const string& text){
    istringstream newr(text);
    string words;
    int count=0;
    while(newr>>words){
        count++;
    }
    return count;

}

string code(string *text){
    int k = 0;
    for (char i : *text) {
        if(i >= 97 && i <= 122 ){
            if(i == 'z'){
                (*text)[k] = 'a';
            } else{
                (*text)[k] += 1;
            }
        }
        ++k;
    }
    return *text;
}
string decode(string text){
    int k = 0;
    for (char i : text) {
        if(i >= 97 && i <= 122 ){
            if(i == 'a'){
                text[k] = 'z';
            } else{
                text[k] -= 1;
            }
        }
        ++k;
    }
    return text;
}

string capitalizeWords(string text) {
    if(text[0] >= 'a' && text[0] <= 'z'){
        text[0] -=32;
    }
    for (int i = 1;i < text.length(); ++i) {
        if(text[i - 1] == ' ' && text[i] >= 'a' && text[i] <='z'){
            text[i] -= 32;
        } else{
            if(text[i] >= 'A' && text[i] <= 'Z'){
                text[i] += 32;
            }
        }
    }
    cout<<endl;
    return text;
}

//double isnum(){
//    double sum = 0;
//    string szavak;
//    getline(cin, szavak);
//    istringstream iss(szavak);
//    double num;
//    while(iss){
//        if(iss >> num){
//            sum += num;
//        }
//    }
//    return sum;
//}