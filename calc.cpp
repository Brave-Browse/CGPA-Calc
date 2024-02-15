#include <iostream>
#include "calc.h"
#include "cgpa.cpp"

using namespace std;

int main()
{
    int input;
    cout << "Menu: " << endl;
    cout << "    1. CGPA" << endl;
    cout << "    2. Percentage" << endl;
    cout << "    3. Exit app" << endl;
    cout << "Enter your choice: ";
    cin >> input;

    switch(input) 
    {
        case 1:
                calcCGPA();
                break;
        case 2:
                calcPercentage();
                break;
        case 3:
                exit(EXIT_SUCCESS);
                break;
    }

    return 0;
}

