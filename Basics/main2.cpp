#include <bits/stdc++.h>
using namespace std;

int main()
{
    int marks;
    cin >> marks;
    if (marks <= 25)
    {
        cout << "Grade is F";
    }
   else if ( marks <= 44)
    {
        cout << "Grade is E";
    }
    else if ( marks <= 49)
    {
        cout << "Grade is D";
    }
    else if ( marks <= 59)
    {
        cout << "Grade is C";
    }
    else if ( marks <= 79)
    {
        cout << "Grade is B";
    }
    else if ( marks <= 100)
    {
        cout << "Grade is A";
    }

    return 0;
}