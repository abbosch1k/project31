#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<string> tasks;
    string task;

    for(int i=0;i<5;i++){
        getline(cin,task);
        tasks.push_back(task);
    }

    for(string t:tasks)
        cout<<t<<endl;
}
