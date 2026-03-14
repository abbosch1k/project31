#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));

    int player;
    cout<<"1 Rock 2 Paper 3 Scissors\n";
    cin>>player;

    int bot = rand()%3+1;

    cout<<"Bot: "<<bot<<endl;

    if(player==bot)
        cout<<"Draw";
    else if((player==1 && bot==3) || (player==2 && bot==1) || (player==3 && bot==2))
        cout<<"You win";
    else
        cout<<"You lose";
}
