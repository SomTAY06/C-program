#include <iostream>
#include <string>
using namespace std;

class Customer {
protected:
    string customer_name;
    double wallet_balance;

public:
    void createAccount() {
        cout << "\nEnter Customer Name: ";
        cin.ignore();
        getline(cin, customer_name);
        cout << "Enter Initial Wallet Balance (Baht): ";
        cin >> wallet_balance;
        cout << "Account created successfully!\n";
    }

    void displayDetails() {
        cout << "\nCustomer Name: " << customer_name << endl;
        cout << "Wallet Balance: " << wallet_balance << " Baht" << endl;
    }
};

class Product : public Customer {
protected:
    string product_name;
    double product_price;

public:
    void addProduct() {
        cout << "\nEnter Product Name: ";
        cin.ignore();
        getline(cin, product_name);
        cout << "Enter Product Price (Baht): ";
        cin >> product_price;
        cout << "Product added successfully!\n";
    }
};

class Transaction : public Product {
public:
    void purchaseProduct() {
        if (product_price <= wallet_balance && product_price > 0) {
            wallet_balance -= product_price;
            cout << "\nPurchase successful! You bought: " << product_name << endl;
        } else {
            cout << "\nInsufficient wallet balance or invalid product price!\n";
        }
    }
};

int main() {
    Transaction market;
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
            market.displayDetails();
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