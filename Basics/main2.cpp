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
    if (marks >= 25 && marks <= 44)
    {
        cout << "Grade is E";
    }
    if (marks >= 45 && marks <= 49)
    {
        cout << "Grade is D";
    }
    if (marks >= 50 && marks <= 59)
    {
        cout << "Grade is C";
    }
    if (marks >= 60 && marks <= 79)
    {
        cout << "Grade is B";
    }
    if (marks >= 80 && marks <= 100)
    {
        cout << "Grade is A";
    }

    return 0;
}