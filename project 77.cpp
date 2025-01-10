// project 77.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include<string>
using namespace std;
#include"temp.h"

int main()
{
    temp obj;
    char choise;
    cout << "\n1-login" << endl;
    cout << "\n2-sigin" << endl;
    cout << "\n3-forgot password" << endl;
    cout << "\n4-Exet" << endl;

    cout << "\nEnter your choice: ";
    cin >> choise;

    switch (choise)
    {
    case '1':
        cin.ignore();
        obj.login();
        break;
    case '2':
        cin.ignore();
        obj.sigin();
        break;
    case '3':
        cin.ignore();
        obj.forgot_password();
        break;
    case '4':
        return 0;
        break;
    default:
        cout << "\ninfiled choice...!" << endl;
        break;
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
