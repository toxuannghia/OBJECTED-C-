#include <bits/stdc++.h>
using namespace std;

class student
{
    string name,hometown;
    int bornYear;
    double average;
pulic:
    string gethometown()
    {
        return hometown;
    }
    void nhap()
    {
        cout << "\n Input your name: ";
        fflush(stdin);
        getline(cin,name);
        cout << "Input your hometown: ";
        getline(cin,hometown);
        cout << "Input your born year: ";
        cin>> bornYear;
        cout << "Input average: ";
        cin >> average;
    }
    void in()
    {
        cout << "\n INFORMATION: ";
        cout << "\N Name: "<<name;
    }
};
