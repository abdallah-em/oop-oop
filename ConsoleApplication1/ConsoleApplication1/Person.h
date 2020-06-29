#pragma once
#include<string>

using namespace std;

class Person
{
private:
	int id;
	static int personsCount;
	string name, mobile, address, email;
public:

    int getid();

	void setname(string n);
	string getname();

	void setmobile(string m);
	string getmobile();

	void setaddress(string d);
	string getaddress();

	void setemail(string e);
	string getemail();

	Person();
	

};

