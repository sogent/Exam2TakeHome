//
// Created by Sarah Ogent on 11/4/21.
//
#include <vector>
#include <iostream>
#include <string>
using namespace std;

#ifndef EXAM2TAKEHOME_TRIPLE_H
#define EXAM2TAKEHOME_TRIPLE_H
class Triple{
public:

    //constructor
    Triple();
    //second constructor
    Triple(int num1, int num2, int num3);
    void GetData(vector<Triple>& newTriple);
    Triple operator+(const Triple& rhs)const;
    bool operator==(const Triple& rhs)const;



    int x;
    int y;
    int z;
private:

};

#endif //EXAM2TAKEHOME_TRIPLE_H
