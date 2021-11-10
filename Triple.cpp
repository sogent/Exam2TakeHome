//
// Created by Sarah Ogent on 11/4/21.
//

#include "Triple.h"
using namespace std;
#include <vector>
#include <iostream>
#include <sstream>

//constructor
Triple::Triple(){
    x=0;
    y=0;
    z=0;
}

//second constructor
Triple::Triple(int num1, int num2, int num3){
    x=num1;
    y=num2;
    z=num3;
}

void Triple::GetData(vector<Triple>& newTriple) {

    string userTripleInput;
    stringstream inSS;
    cout << "Please enter the x, y, z values with spaces: ";
    getline(cin, userTripleInput);
    inSS.str(userTripleInput);
    inSS>>x;
    inSS>>y;
    inSS>>z;
    Triple currTriple(x, y, z);
    newTriple.push_back(currTriple);
}

Triple Triple::operator+(const Triple& rhs)const{
    Triple result;
    result.x=this->x+rhs.x;
    result.y=this->y+rhs.y;
    result.z=this->z+rhs.z;
    return result;
}

bool Triple::operator==(const Triple& rhs)const{
    Triple result;
    if((result.x==rhs.x)&&(result.y==rhs.y)&&(result.z==rhs.z)){
    return true;
}else{
    return false;
}
    //return (result.x==rhs.x)&&(result.y==rhs.y)&&(result.z==rhs.z);


}