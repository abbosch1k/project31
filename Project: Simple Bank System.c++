#include <iostream>
using namespace std;

int main() {
    double balance = 1000;
    int choice;
    double amount;

    while(true){
        cout << "\n1 Deposit\n2 Withdraw\n3 Balance\n4 Exit\n";
        cin >> choice;

        switch(choice){
            case 1:
                cout << "Amount: ";
                cin >> amount;
                balance += amount;
                break;

            case 2:
                cout << "Amount: ";
                cin >> amount;
                balance -= amount;
                break;

            case 3:
                cout << "Balance: " << balance << endl;
                break;

            case 4:
                return 0;
        }
    }
}
