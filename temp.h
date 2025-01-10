#pragma once

#include<fstream>

class temp
{
	string username, email, password;
	string seruser, seremail, serpassword;
	fstream file;
public:
	
	temp();
	~temp();
	void login();
	void sigin();
	void forgot_password();
	
};


