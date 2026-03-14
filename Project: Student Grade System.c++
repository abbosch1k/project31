#include <iostream>
using namespace std;

int main(){
    int score;
    cin>>score;

    if(score>=90) cout<<"A";
    else if(score>=75) cout<<"B";
    else if(score>=60) cout<<"C";
    else cout<<"F";
}
