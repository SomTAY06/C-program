#include <iostream>
#include <string>
using namespace std;

class Customer {
private:
    string name;
    double wallet;

public:
    Customer() {
        name = "New usert";
        wallet = 1000.0;
    }

    Customer(string cname, double cwallet) {
        name = cname;
        wallet = cwallet;
    }

    Customer(const Customer &other) {
        name = other.name;
        wallet = other.wallet;
    }

    void display() {
        cout << "\nCustomer Name: " << name << endl;
        cout << "Wallet Balance: " << wallet << " Baht\n";
    }
};

int main() {
    cout << "\nCreating customer...";
    Customer c1;
    c1.display();

    cout << "\nCreating customer...";
    Customer c2("Ratchapon", 1500.0);
    c2.display();

    cout << "\nCreating customer...";
    Customer c3(c2);
    c3.display();

    return 0;
}