# Savings Goal Calculator

## Description
This program calculates the time it will take to reach a savings goal, along with the total balance, based on the yearly deposit, desired savings goal, and revenue percentage.

## Prerequisites
- C++ compiler

## How to Use
1. Compile the code using a C++ compiler.
2. Run the compiled executable.
3. Follow the prompts to input the yearly deposit, savings goal, and revenue percentage.
4. The program will output the time it will take to reach the savings goal and the total balance after that time period.

## Inputs
- Yearly deposit: The amount you plan to deposit each year.
- Savings goal: The total amount you want to save.
- Revenue percentage: The annual revenue percentage expected on the savings.

## Outputs
- Time to reach savings goal: The number of years it will take to reach the savings goal.
- Total balance: The total balance in the savings account after reaching the goal.

## Formula Used
The formula used to calculate the total balance is based on the future value of annuity formula:
    FV = P * [(1 + r)^n - 1] / r
Where:
- FV = Future Value (Total savings balance)
- P = Yearly deposit
- r = Revenue percentage (converted to decimal)
- n = Number of years

## Example
For example, if you want to save $10,000, deposit $1,000 yearly, and expect a 5% annual revenue, the program will output:
    "With a revenue of 5 percent it will take X years to reach your savings goal."
    "Your total balance after X years will be Y SEK."

## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

