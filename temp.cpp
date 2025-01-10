#include<iostream>
#include<string>
using namespace std;
#include "temp.h"


temp::temp()
{
}

temp::~temp()
{
}

void temp::login()
{
	cout << "==========login==========" << endl;
	cout << "Enter Username: ";
	getline(cin, seruser);
	cout << "Enter password: ";
	getline(cin, serpassword);

	file.open("Registration.txt", ios::in);
	getline(file, username, '*');
	getline(file, email, '*');
	getline(file, password, '\n');

	while (!file.eof())
	{
		if (seruser == username)
		{
			if (serpassword == password)
			{
				cout << "corect login..." << endl;
				cout << "username is: " << username << endl;
				cout << "Email is : " << email << endl;
				break;
			}
			else
			{
				cout << "\password uncorect...!" << endl;
				break;
			}
		}
		


		getline(file, username, '*');
		getline(file, email, '*');
		getline(file, password, '\n');
	}
	if (seruser != username)
			cout << "!...acount not found...!" << endl;
	file.close();


}
void temp::sigin()
{
	cout << "==========fsign in==========" << endl;
	cout << "Enter your username : ";
	getline(cin, username);

	cout << "Enter your Email : ";
	getline(cin, email);

	cout << "Enter your password : ";
	getline(cin, password);

	file.open("Registration.txt", ios::out | ios::app);
	file << username << '*' << email << '*' << password << endl;
	file.close();
	cout << "sigin combleted sucsefull" << endl;
}
void temp::forgot_password()
{
	cout << "==========forgot_password==========" << endl;
	cout << "Enter username : ";
	getline(cin, seruser);
	cout << "Enter Email : ";
	getline(cin, seremail);

	file.open("Registration.txt", ios::in);
	getline(file, username, '*');
	getline(file, email, '*');
	getline(file, password, '\n');
	while (!file.eof())
	{
		if (seruser == username)
			if(seremail == email)
		{
			cout << "the acount found" << endl;
			cout << "password is : " << password << endl;
			break;
		}
		
		getline(file, username, '*');
		getline(file, email, '*');
		getline(file, password, '\n');
	}
	if (seruser != username)
			cout << "!...acount not found...!" << endl;
	file.close();

}


