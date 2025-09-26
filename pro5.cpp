#include <iostream>
#include <string>
using namespace std;

class Customer {
private:
    string name;
    double wallet;
    static int customerCount; 
public:
    Customer(string cname, double cwallet)
 {
        name = cname;
        wallet = cwallet;
        customerCount++; 
    }

    void display() {
        cout << "\nCustomer Name: " << name << endl;
        cout << "Wallet Balance: " << wallet << " Baht\n";
    }

     static void showCustomerCount() 
{
        cout << "\nTotal Customers interested: " << customerCount << endl;
    }
       static void showPromotion() {
        cout << "\nPromotion: Buy 2 get 1 free on all items!\n";
    }
};

int Customer::customerCount = 0;
int main() {
        Customer::showPromotion();
    Customer c1("Ratchapon", 1200.0);
    Customer c2("TAY", 1500.0);
    c1.display();
    c2.display();
       Customer::showCustomerCount();

    return 0;
}

