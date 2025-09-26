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
        cin.ignore();
        cout << "\nEnter Customer Name: ";
        getline(cin, customer_name);
        cout << "Enter Initial Wallet Balance (Baht): ";
        cin >> wallet_balance;
        cout << "Account created successfully!\n";
    }

    void addProduct(string name, double price) {
        product_name = name;
        product_price = price;
        cout << "Product added successfully!\n";
    }

    void addProduct() {
        cin.ignore();
        cout << "\nEnter Product Name: ";
        getline(cin, product_name);
        cout << "Enter Product Price (Baht): ";
        cin >> product_price;
        cout << "Product added successfully!\n";
    }

    void purchaseProduct(double price) {
        if (price <= wallet_balance && price > 0) {
            wallet_balance -= price;
            cout << "\nPurchase successful! You spent " << price << " Baht\n";
        } else {
            cout << "\nInsufficient wallet balance or invalid product price!\n";
        }
    }

    void purchaseProduct() {
        if (product_price <= wallet_balance && product_price > 0) {
            wallet_balance -= product_price;
            cout << "\nPurchase successful! You bought: " << product_name << endl;
        } else {
            cout << "\nInsufficient wallet balance or invalid product price!\n";
        }
    }

    void displayDetails() {
        cout << "\nCustomer Name: " << customer_name << endl;
        cout << "Wallet Balance: " << wallet_balance << " Baht\n";
    }
};

int main() {
    OnlineMarket market;
    int choice;

    do {
        cout << "\n====== Online Market Menu ======";
        cout << "\n1. Create Customer Account";
        cout << "\n2. Add Product (manual input)";
        cout << "\n3. Add Product (direct values)";
        cout << "\n4. Purchase Product (added product)";
        cout << "\n5. Purchase Product (custom price)";
        cout << "\n6. Display Customer Details";
        cout << "\n7. Exit";
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
                market.addProduct("Wireless Mouse", 299.0);
                break;
            case 4:
                market.purchaseProduct();
                break;
            case 5:
                market.purchaseProduct(150.0);
                break;
            case 6:
                market.displayDetails();
                break;
            case 7:
                cout << "Thank you for shopping with us!\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 7);

    return 0;
}