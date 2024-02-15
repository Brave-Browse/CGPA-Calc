#include <iostream>
#include "cgpa.h"

using namespace std;

int calcCGPA()
{
    int result = 0;
    int total = 0;
    int marks[5] = {31, 20, 25, 45, 32};
    for (int i = 0; i < 5; i++)
    {
        total = total + marks[i];
    }
    result = (total / 5);
    cout << "CGPA: " << result << endl;
    return 0;
}

int calcPercentage()
{
    int result = 0;
    int total = 0;
    int marks[5] = {31, 20, 25, 45, 32};
    for (int i = 0; i < 5; i++)
    {
        total = total + marks[i];
    }
    cout << total << endl;
    result = (total * 100) / 250;
    cout << result << endl;
    cout << "Percentage: " << result << endl;
    return 0;
}
