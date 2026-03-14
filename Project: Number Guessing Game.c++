#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    int number = rand()%100+1;
    int guess;

    do{
        cout<<"Guess number: ";
        cin>>guess;

        if(guess>number) cout<<"Too big\n";
        if(guess<number) cout<<"Too small\n";

    }while(guess!=number);

    cout<<"You win\n";
}
