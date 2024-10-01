//Terrence Williamson
//09.28.24
//Chapter 3 Programming Project
//Project-1-Ingredient-Adjuster

#include <iostream>
#include <iomanip>
using namespace std;

double cookies, cups, cupb, cupf, multi;
//for a batch of 48 cookies, you need 1.5 cups of sugar, 1 cup of butter,
//2.75 cups of flour; these are the numbers used in calc's below

int main()
{//display data to screen after user gets cookie total
    cout << "How many cookies do you need to bake? ";
    cin >> cookies;
    multi = (cookies / 48);
    cups = multi * 1.5, cupb = multi * 1, cupf = multi * 2.75;
    cout << "For " << cookies << " cookies, you will need:\n* " << setprecision(2)
        << fixed << cups << " cups of sugar\n* " << setprecision(2) << fixed <<
    cupb << " cups of butter\n* " << setprecision(2) << fixed << cupf << " cups of flour";
    return 0;
}