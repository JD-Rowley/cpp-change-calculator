#include <iostream>

using namespace std;

int main() {
    const int dollars {100};
    const int quarters {25};
    const int dimes {10};
    const int nickels {5};
    const int pennies {1};
    
    cout << "Enter an amount in cents: ";
    
    int amount;
    int change;
    int result;
    
    cin >> amount;
    
    cout << "You can provide change for this change as follows:" << endl;
    
    result = amount / dollars;
    cout << "dollars: " << result << endl;
    change = amount - (dollars * result);
    
    result = change / quarters;
    cout << "quarters: " << result << endl;
    change = change - (quarters * result);
    
    result = change / dimes;
    cout << "dimes: " << result << endl;
    change = change - (dimes * result);
    
    result = change / nickels;
    cout << "nickels: " << result << endl;
    change = change - (nickels * result);
    
    cout << "pennies: " << change << endl;

    cout << endl;
    return 0;
}


