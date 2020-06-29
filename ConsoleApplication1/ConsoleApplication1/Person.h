#pragma once
#include<string>

using namespace std;

class Person
{
private:
	string name, mobile, address, email;
	int id;
public:
	void setname(string n);
	string getname();

	void setmobile(string m);
	string getmobile();

	void setaddress(string d);
	string getaddress();

	void setemail(string e);
	string getemail();

	void setid(int id);
	int getid();

};

