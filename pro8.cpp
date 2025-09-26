#include &lt;iostream&gt;
#include &lt;string&gt;
using namespace std;

class OnlineMarket {
private:
string customer_name;
double wallet_balance;
string product_name;
double product_price;
public:
void createAccount() {
cout &lt;&lt; &quot;\nEnter Customer Name: &quot;;
cin.ignore();
getline(cin, customer_name);
cout &lt;&lt; &quot;Enter Initial Wallet Balance (Baht): &quot;;
cin &gt;&gt; wallet_balance;
cout &lt;&lt; &quot;Account created successfully!\n&quot;;
}
void addProduct() {
cout &lt;&lt; &quot;\nEnter Product Name: &quot;;
cin.ignore();
getline(cin, product_name);
cout &lt;&lt; &quot;Enter Product Price (Baht): &quot;;
cin &gt;&gt; product_price;
cout &lt;&lt; &quot;Product added successfully!\n&quot;;

}
void purchaseProduct() {
if (product_price &lt;= wallet_balance &amp;&amp; product_price &gt; 0) {
wallet_balance -= product_price;
cout &lt;&lt; &quot;\nPurchase successful! You bought: &quot; &lt;&lt; product_name &lt;&lt; endl;
} else {
cout &lt;&lt; &quot;\nInsufficient wallet balance or invalid product price!\n&quot;;
}
}
void displayDetails() {
cout &lt;&lt; &quot;\nCustomer Name: &quot; &lt;&lt; customer_name &lt;&lt; endl;
cout &lt;&lt; &quot;Wallet Balance: &quot; &lt;&lt; wallet_balance &lt;&lt; &quot; Baht&quot; &lt;&lt; endl;
}
};

int main() {
OnlineMarket market;
int choice;
do {
cout &lt;&lt; &quot;\n====== Online Market Menu ======&quot;;
cout &lt;&lt; &quot;\n1. Create Customer Account&quot;;
cout &lt;&lt; &quot;\n2. Add Product&quot;;
cout &lt;&lt; &quot;\n3. Purchase Product&quot;;cout &lt;&lt; &quot;\n4. Display Customer Details&quot;;
cout &lt;&lt; &quot;\n5. Exit&quot;;

cout &lt;&lt; &quot;\nEnter your choice: &quot;;
cin &gt;&gt; choice;

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
cout &lt;&lt; &quot;Thank you for shopping with us!\n&quot;;
break;
default:
cout &lt;&lt; &quot;Invalid choice! Please try again.\n&quot;;
}
}
while (choice != 5);
return 0;
}