#include <iostream>
using namespace std;

int main(){
    string user="admin";
    string pass="1234";

    string u,p;

    cin>>u>>p;

    if(u==user && p==pass)
        cout<<"Login success";
    else
        cout<<"Login failed";
}
