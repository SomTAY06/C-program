#include &lt;iostream&gt;
#include &lt;string&gt;
using namespace std;

int main() {
string product;
double price;
double wallet;

cout &lt;&lt; &quot; Welcome to OnlineMArket!\n&quot;;
cout &lt;&lt; &quot; Enter your wallet balance (Baht): &quot;;
cin &gt;&gt; wallet;
cin.ignore();
cout &lt;&lt; &quot; Enter the product name: &quot;;
getline(cin, product);
cout &lt;&lt; &quot; Enter product price (Baht): &quot;;
cin &gt;&gt; price;

if (price &gt; 0 &amp;&amp; price &lt;= wallet) {
wallet -= price;
cout &lt;&lt; &quot;\n You bought &quot; &lt;&lt; product &lt;&lt; &quot; for &quot; &lt;&lt; price &lt;&lt; &quot; Baht.\n&quot;;
cout &lt;&lt; &quot;Remaining balance: &quot; &lt;&lt; wallet &lt;&lt; &quot; Baht.\n&quot;;
} else {
cout &lt;&lt; &quot;\n Purchase failed! Not enough money or invalid price.\n&quot;;
}

cout &lt;&lt; &quot;\n Thanks for visitOnlineMArket!\n&quot;;
return 0;
}