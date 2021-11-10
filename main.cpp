#include <iostream>
#include "Triple.h"
#include <sstream>
#include <vector>

using namespace std;
ostream& operator<<(ostream& os, Triple const& tripleVec){
    os << "(";
    os << tripleVec.x << ",";
    os << tripleVec.y << ",";
    os << tripleVec.z;
    os << ")";
    os << endl;

    return os;
}


int main() {

    string userInput;
    vector<Triple>newTripleVec;
    cout<<"The Tripler"<<endl;
    bool run=true;

    while(run){

        cout<<"a) Enter a New Triple"<<endl;
        cout<<"b) List the Triples Entered"<<endl;
        cout<<"c) Add Two Triples"<<endl;
        cout<<"d) Test for Equality"<<endl;
        cout<<"q) To quit"<<endl;
        getline(cin, userInput);

            if(userInput=="a") {
                Triple newTriple;
                newTriple.GetData(newTripleVec);
            }

            if(userInput=="b") {
                int i;
                for(i=0;i<newTripleVec.size();++i){
                    cout<<"index "<<i<<" = ";
                    cout<<newTripleVec.at(i);
                }
                   cout<<endl;

            }

            if(userInput=="c") {
                stringstream inSS;
                string userIndex;
                string indexInput1;
                string indexInput2;
                int index1;
                int index2;

                cout << "Please enter the indexes to add together (separate with spaces): ";
                inSS.clear();
                getline(cin, userIndex);
                inSS.str(userIndex);
                inSS>>indexInput1;
                inSS>>indexInput2;
                index1=stoi(indexInput1);
                index2=stoi(indexInput2);

                cout<<"Sum of Triple: ";
                cout<< newTripleVec.at(index1)+newTripleVec.at(index2);
                cout<<endl;
            }

            if(userInput=="d") {
                stringstream inSS;
                string userIndex;
                string indexInput1;
                string indexInput2;
                int index1;
                int index2;

                cout << "Please enter the indexes to check if equal (separate with spaces): ";
                inSS.clear();
                getline(cin, userIndex);
                inSS.str(userIndex);
                inSS>>indexInput1;
                inSS>>indexInput2;
                index1=stoi(indexInput1);
                index2=stoi(indexInput2);

                if(newTripleVec.at(index1)==newTripleVec.at(index2)){
                    cout<<"The triples are equal";
                }else{
                    cout<<"The triples are not equal";
                }
                cout<<endl;
            }

            if(userInput=="q") {
                    run = false;
            }

    }

    return 0;
}
