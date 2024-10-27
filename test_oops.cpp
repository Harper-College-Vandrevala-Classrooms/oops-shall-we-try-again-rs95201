#include <string>
#include <iostream>
#include <limits>
#include "oops.hpp"

using namespace std;
int main()
{   
    string prompt_for_int = "Please enter a value: (0 - 100)\nEnter \"default\" to "
                            "use the default value of 90.\nOR \nEnter \"exit\" to leave the menu.\n";
    //string prompt_for_string = "Please enter a string value: \n";
    string errmsg = "\nYour value is invalid!\n";
    int min = 0;
    int max = 100;
    int def = 90;
    int result = input(min, max, errmsg, prompt_for_int, def);
    if(result == -1) 
    {
        return 0;
    } 
    else
    {
    cout << "The value chosen by the user is: " << result << endl;
    }
    // value = input(prompt_for_string, errmsg);
    //cout << "The value chosen by the user is " << "\"" << value << "\"" << endl;
    //cin.clear();  
    //cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return 0;
}
    
