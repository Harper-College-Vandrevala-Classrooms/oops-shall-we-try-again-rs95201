#include <iostream>
#include <limits>
using namespace std;

int input(int min, int max, string errmsg, string prompt)
{
    int value;
    bool valid = false;
    while (!valid)
    {
        cout << prompt;
        cin >> value;
        if(value < min || value > max || value == min || value == max)
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
    

