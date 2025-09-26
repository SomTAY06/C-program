#include <iostream>
#include <string>
using namespace std;

class OnlineMarket {
private:
    string customer_name;
    double wallet_balance;
    string product_name;
    double product_price;

public:
    void createAccount() {
        cout << "\nEnter Customer Name: ";
        cin.ignore();
        getline(cin, customer_name);
        cout << "Enter Initial Wallet Balance (Baht): ";
        cin >> wallet_balance;
        cout << "Account created successfully!\n";
    }
    void addProduct() {
        cout << "\nEnter Product Name: ";
        cin.ignore();
        getline(cin, product_name);
        cout << "Enter Product Price (Baht?): ";
        cin >> product_price;

        cout << "Product added successfully!\n";
    }
    void purchaseProduct() {
        if (product_price <= wallet_balance && product_price > 0) {
            wallet_balance -= product_price;
            cout << "\nPurchase successful! You bought: " << product_name << endl;
        } else {
            cout << "\nInsufficient wallet balance or invalid product price!\n";
        }
    }
    friend void displayDetails(const OnlineMarket& market);
};
void displayDetails(const OnlineMarket& market) {
    cout << "\nCustomer Name: " << market.customer_name << endl;
    cout << "Wallet Balance: " << market.wallet_balance << " Baht" << endl;
}

int main() {
    OnlineMarket market;
    int choice;

    do {
        cout << "\n====== Online Market Menu ======";
        cout << "\n1. Create Customer Account";
        cout << "\n2. Add Product";
        cout << "\n3. Purchase Product";
        cout << "\n4. Display Customer Details";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                market.createAccount();
                break;
            case 2:
                market.addProduct();
                break;
            case 3:
                market.purchaseProduct();
                break;
            case 4:
                displayDetails(market);
                break;
            case 5:
                cout << "Thank you for shopping with us!\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}

