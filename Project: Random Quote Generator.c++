#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    string quotes[3]={"Never give up","Code every day","Stay curious"};

    srand(time(0));
    cout<<quotes[rand()%3];
}
