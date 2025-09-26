#include <iostream>
using namespace std;

class Customer {
public:
    string name;
    double balance;

    void create() {
        cout << "Enter customer name: ";
        cin >> name;
        cout << "Enter wallet balance: ";
        cin >> balance;
    }
};

class Product {
public:
    string name;
    double price;

    void add() {
        cout << "Enter product name: ";
        cin >> name;
        cout << "Enter product price: ";
        cin >> price;
    }
};

class Transaction {
public:
    void buy(Customer& c, Product& p) {
        if (c.balance >= p.price) {
            c.balance -= p.price;
            cout << "Purchase successful! " << c.name << " bought " << p.name << endl;
        } else {
            cout << "Not enough balance!" << endl;
        }
    }
};

class OnlineMarket : public Customer, public Product, public Transaction {
public:
    void run() {
        create();   
        add();    
        buy(*this, *this); 
        cout << "Remaining balance: " << balance << " Baht" << endl;
    }
};

int main() {
    OnlineMarket market;
    market.run();
    return 0;
}