#include <iostream>
#include <limits>
#include <string>
#include "oops.hpp"
using namespace std;
string input(const string& prompt, const string& errmsg)
{
    string value;
    bool valid = false;
    while (!valid)
    {
        cout << prompt;
        getline(cin, value);
        if(value.length() <= 0)
        {
            cout << errmsg << endl;
        }
        else
        {
         valid = true;
        }
    }
    return value;
}
int input(int min, int max, const string& errmsg, const string& prompt, int def = 90)
{
    int value;
    string choice;
    
    bool valid = false;
    while (!valid)
    {
        cout << prompt;
        if(isalpha(cin.peek()))
        {
            cin >> choice;
        }
        if(choice == "default")
        {
            return def;
        }
        else if(choice == "exit")
        {
             return -1;
        }
        cin >> value;
        if(value < min || value > max || value == min || value == max)
        {
            cout << errmsg << endl;
            cin.clear();  
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else 
        {
        valid = true;
        }
        
    }
     return value;
}
