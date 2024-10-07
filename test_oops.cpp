#include <string>
#include <iostream>
#include "oops.hpp"

using namespace std;
int main()
{
    string prompt = "Please enter a value: (0 - 100)\n";
    string errmsg = "\nYour input is invalid!\n";
    int min = 0;
    int max = 100;
    int result = input(min, max, errmsg, prompt);
    cout << "The value chosen by the user is: " << result << endl;

    prompt = "Please enter a value: (0 -300)\n";
    errmsg = "\nYour input is invalid!\n";
    min = 0;
    max = 300;
    result = input(min, max, errmsg, prompt);
    cout << "The value chosen by the user is: " << result << endl;

    prompt = "Please enter a value: (-50 - 50)\n";
    errmsg = "\nYour input is invalid!\n";
    min = -50;
    max = 50;
    result = input(min, max, errmsg, prompt);
    cout << "The value chosen by the user is: " << result << endl;

    prompt = "Please enter a value: (1-3)\n";
    errmsg = "\nYour input is invalid!\n";
    min = 1;
    max = 3;
    result = input(min, max, errmsg, prompt);
    cout << "The value chosen by the user is: " << result << endl;
    return 0;
}
