#include <iostream>
#include <string>
using namespace std;

int main() {
    string password;
    int score = 0;

    cout << "Enter password: ";
    cin >> password;

    if (password.length() >= 8) score++;
    
    for(char c : password){
        if(isdigit(c)){ score++; break; }
    }

    for(char c : password){
        if(isupper(c)){ score++; break; }
    }

    if(score == 3)
        cout << "Strong password\n";
    else if(score == 2)
        cout << "Medium password\n";
    else
        cout << "Weak password\n";
}
