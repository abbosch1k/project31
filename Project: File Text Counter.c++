#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ifstream file("text.txt");
    string word;
    int count=0;

    while(file>>word)
        count++;

    cout<<"Words: "<<count;
}
