//Terrence Williamson
//10.01.24
//Chapter 3 Programming Project
//Project-3-Interest-Earned

#include <iostream>
#include <iomanip>
using namespace std;
//user input variables
double prin, rate, cmd;

int main()
{//Display program intent and get user's input
    cout << "This program will tell you your savings account balance after earning one year of interest.\n";
    cout << "What is the current balance in your savings account? $", cin >> prin;
    cout << "What is your current interest rate percent? ", cin >> rate;
    cout << "How many times per year does your interest get paid into your account? ", cin >> cmd;
    cout << "\n\nAssuming there are no more deposits to that account...\n\n";
    cout << "Principal amount:" << setw(12) << "$" << setprecision(2) << fixed << right << prin;
    cout << "\nCurrent interest rate:" << setw(12) << setprecision(2) << fixed << right << rate << "%";
    //converts percentage to decimal
    rate /= 100;
    //writing equation to determine total interest without including principal
    double interest = prin * pow((1 + (rate / cmd)), cmd) - prin;
    cout << "\nInterest earned:  " << setw(12) << "$" << setprecision(2) << fixed << right << interest;
    //getting total balance amount
    interest += prin;
    cout << "\nSavings balance: " << setw(12) << "$" << setprecision(2) << fixed << right << interest << "\n\n";
    return 0;
}