#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    string chars="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    
    int length;
    cout<<"Password length: ";
    cin>>length;

    for(int i=0;i<length;i++)
        cout<<chars[rand()%chars.size()];
}
