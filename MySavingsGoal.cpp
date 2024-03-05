#include <iostream> 
#include <cmath> 
using namespace std;
int main() {

    int deposit;
    int savings_goal = 0;
    double revenue;
    double year = 0;
    double total_savings_balance = 0.0;
    double revenue_percent = 0;

    cout << " - My Savings Goal - \n";
    cout << ".....................\n";
    cout << "\n";
    cout << "Add the yearly sum you want to deposit: ";
    cin >> deposit; 
    cout << "Add your savings goal: ";
    cin >> savings_goal; 
    cout << "Add the revenue: ";
    cin >> revenue; 
    
    revenue_percent = 1 + (revenue / 100); 
    while (total_savings_balance < savings_goal) {
        year++;
        total_savings_balance = ((double)deposit * (pow(revenue_percent, year) - 1)) / (revenue_percent - 1);
    }
    
    cout << "\n";
    cout << "With a revenue of " << revenue << " percent it will take " << year << " years to reach your savings goal.\n";
    cout << "Your total balance after " << year << " years will be " << total_savings_balance << " SEK.\n";
    cout << "\n";
    
    return 0; 
}