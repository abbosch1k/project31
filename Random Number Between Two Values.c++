#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    int a,b;

    cout << "Enter min number: ";
    cin >> a;

    cout << "Enter max number: ";
    cin >> b;

    srand(time(0));

    cout << "Random number: " << a + rand()%(b-a+1) << endl;

    return 0;
}
