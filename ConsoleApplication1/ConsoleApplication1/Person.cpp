#include "Person.h"

int Person::personsCount = 0;

Person::Person()
{
	personsCount++;
	id = personsCount;
}

int Person::getid()
{
	return id;
}

void Person::setname(string n)
{
	name = n;
}

string Person::getname()
{
	return name;
}

void Person::setmobile(string m)
{
	mobile = m;
}

string Person::getmobile()
{
	return mobile;
}

void Person::setaddress(string d)
{
	address = d;
}

string Person::getaddress()
{
	return address;
}

void Person::setemail(string e)
{
	email = e;
}

string Person::getemail()
{
	return email;
}
