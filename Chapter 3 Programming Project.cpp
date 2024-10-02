//Terrence Williamson
//10.01.24
//Chapter 3 Programming Project
//Program-2-Math-Tutor

#include <iostream>
using namespace std;
//random numbers used in this program for simple arithmetic
int solution = 388 + 125;
int b;

int main()
{//display problem on screen, then use cin.get to require
 //enter key pressed before showing solution
    cout << "Solve the equation below. To check your work once done, please press "
        "the Enter or Return key\n\n";
    cout << "    388\n+   125\n________";
    cin.get();
    cout << "    " << solution << "\n\n";
    return 0;
}